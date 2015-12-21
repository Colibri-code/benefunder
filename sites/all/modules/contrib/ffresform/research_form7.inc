<?php
//page 7 form and submit 
function form_my_research_form_page7($form, &$form_state) {
    
    $curuserid=$_GET['userid']; //get current user id which passed from the previous url
    $secondary_cid = 0;
    $result=db_query("select secondary_cid from {ff_researchers} where id=:rid",array(':rid' => $curuserid));
    if ($result) {
      while ($row = $result->fetchAssoc()) {
        $secondary_cid = $row['secondary_cid'];
      }
    }
    $form['hiddenuserid']=array(  //initialize a form hidden to store the userid to retrieve in submit
        '#type' => 'hidden',
        '#value' => $curuserid,
    );
    $form['maintitle'] = array(
        '#type' => 'item',
        '#title' => t('If applicable, please provide a secondary category that also fits your research. 
        If no secondary category, just click "Continue".')
    );
    //extract primary research category from db using js 
    //when js extract the categories then update the radios options i.e. $res_category
    
    //radios
    $res_category = array(1 => t('Arts, Humanities, & Education'), 2 => t('Environment & Universe'),3 => t('Life'),4 => t('Technology'));

    $form['rescategory'] = array(
        '#type' => 'radios',
        '#title' => t('This question is optional. Only select a secondary category if it applies to at least 25% of your research program. 
        Selecting a secondary category will not increase your chances to get matched with a donor. Some donors are interested in very specialized 
        researchers, others are interested in researchers with a diverse research program.'),
        '#options' => $res_category,
        '#default_value' => $secondary_cid,

    );
    
    $form['back'] = array(
      '#type' => 'submit',
      '#value' => t('Back'),
      '#name' => 'back',
      '#submit' => array('go_back'),
      '#limit_validation_errors' => array(
        array('hiddenuserid')),
    );
    
    $form['continuebutton'] = array( //continure button to decide goto page
        '#type' => 'submit',
        '#value' => t('Continue')
        
    );
    
    return $form;
}

function go_back($form, &$form_state){

    $primary_cid = 0;
    $curuserid=$form_state['values']['hiddenuserid'];    
    $result=db_query("select primary_cid from {ff_researchers} where id=:rid",array(':rid' => $curuserid));
    if ($result) {
      while ($row = $result->fetchAssoc()) {
        $primary_cid = $row['primary_cid'];
      }
    }
    $pagegoto_number=$primary_cid+2; //base on page2 
    $pagegoto_url='ffresform/research_form_page'.$pagegoto_number; //cat url string
    $urloptions = array('query' => array('userid' => $curuserid)); 
    drupal_goto($pagegoto_url,$urloptions);
}

function form_my_research_form_page7_submit($form, &$form_state){
    //add the submit function here, the function related with database
    
    $curuserid=$form_state['values']['hiddenuserid'];    
    $urloptions = array('query' => array('userid' => $curuserid)); //pass current userid to next page
    
    //base on the choice of user goto the corresponding page, if user choose nothing then goto page 12
    $radios_choice=$form_state['values']['rescategory'];   //Need add click cancel function on radios using js
    if($radios_choice == null){
         try{
            $resscid_updated = db_update('ff_researchers') // if choose nothing, set the secondery cid to 0
            ->fields(array(
            'secondary_cid' => null
            ))
            ->condition('id',$curuserid, '=')
            ->execute();
            
            //if null and previous records existed,then delete all previous secondary subcategories i.e. fromid=2
            $fromid=2; //means this subcategories from secondary cid
            $db_ridexisted=db_query("select count(*) from {ff_researchers_subcategories} where rid=:rid and fromid=:fromid",array(':rid' => $curuserid,':fromid' => $fromid))->fetchField();
            
            if($db_ridexisted!=0){//if there is records in subcategories table, then delete before insert new one
                
                $dbsubcres_delete = db_query("delete from {ff_researchers_subcategories} where rid=:rid 
                and fromid=:fromid",array(':rid' => $curuserid,':fromid' => $fromid));
            }
        
            }catch(PDOException $e){
                drupal_set_message(
                "An unexpected error has occurred-When secondary cid stored into database");
            }
        
        drupal_goto('ffresform/research_form_page12',$urloptions);  //skip the rescategory options to page 12 if user choose nothing and continue
    }else{ 
         
         //update the secondary category id of current user in researchers table
        $previous_sid=db_query("select secondary_cid from {ff_researchers} where id=:rid",array(':rid' => $curuserid))->fetchField();
    
        if($radios_choice!=$previous_sid){ //if current choice differ from previous one, then delete previous subcategories related with this pid
            
            //if different with previous and previous records existed,then delete all previous secondary subcategories i.e. fromid=2
            $fromid=2; //means this subcategories from secondary cid
            $db_ridexisted=db_query("select count(*) from {ff_researchers_subcategories} where rid=:rid and fromid=:fromid and sid in (select id from ff_subcategories where cid=:cid)",array(':rid' => $curuserid,':fromid' => $fromid,':cid' => $previous_sid))->fetchField();
            
            if($db_ridexisted!=0){//if there is records in info session table, then delete before insert new one
                
                $dbsubcres_delete = db_query("delete from {ff_researchers_subcategories} where rid=:rid and fromid=:fromid 
                and sid in (select id from ff_subcategories where cid=:cid)",array(':rid' => $curuserid,':fromid' => $fromid,':cid' => $previous_sid));
            }
            
            try{
            $rescid_updated = db_update('ff_researchers') // Table name no longer needs {}
            ->fields(array(
            'secondary_cid' => $radios_choice,
            ))
            ->condition('id',$curuserid, '=')
            ->execute();
            
            }catch(PDOException $e){
                drupal_set_message(
                "An unexpected error has occurred-When secondary cid stored into database");
            }
            
        }
         
        $pagegoto_number=$radios_choice+7; //base on page7 if user choose some choice 
        $pagegoto_url='ffresform/research_form_page'.$pagegoto_number; //cat url string
        
        drupal_goto($pagegoto_url,$urloptions); //goto the select page
    }
            
}