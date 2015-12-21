<?php
//page 2 form and submit 
function form_my_research_form_page2($form, &$form_state) {
    
    $curuserid=$_GET['userid']; //get current user id which passed from the previous url
    $primary_cid = 0;
    $result=db_query("select primary_cid from {ff_researchers} where id=:rid",array(':rid' => $curuserid));
    if ($result) {
      while ($row = $result->fetchAssoc()) {
        $primary_cid = $row['primary_cid'];
      }
    }

    $form['hiddenuserid']=array(  //initialize a form hidden to store the userid to retrieve in submit
        '#type' => 'hidden',
        '#value' => $curuserid,
    );
    $form['maintitle'] = array(
        '#type' => 'item',
        '#title' => t('Which category best fits your research?')
    );
    //extract primary research category from db using js 
    //when js extract the categories then update the radios options i.e. $res_category
    
    //radios
    $res_category = array(1 => t('Arts, Humanities, & Education'), 2 => t('Environment & Universe'),3 => t('Life'),4 => t('Technology'));

    $form['rescategory'] = array(
        '#type' => 'radios',
        '#title' => t('Select a primary category. You will be able to select a secondary category later (optional).'),
        '#options' => $res_category,
        '#default_value' => $primary_cid,
        '#required' => TRUE
    );
    
    $form['back'] = array(
      '#type' => 'submit',
      '#value' => t('Back'),
      '#name' => 'back',
      '#submit' => array('go_back'),
      '#limit_validation_errors' => array(
        array('hiddenuserid')),
    );

    $form['continuebutton'] = array( //final submit button
        '#type' => 'submit',
        '#value' => t('Continue'),
        '#name' => 'continue'
    );
    
    return $form;
}

function go_back($form, &$form_state){
    $curuserid=$form_state['values']['hiddenuserid'];    
    $urloptions = array('query' => array('userid' => $curuserid)); 
    drupal_goto('ffresform/research_form_page1',$urloptions);
}

function form_my_research_form_page2_submit($form, &$form_state){
    //add the submit function here, the function related with database
    
    $curuserid=$form_state['values']['hiddenuserid'];    
    $urloptions = array('query' => array('userid' => $curuserid)); //pass current userid to next page
    
    
    //base on the choice of user goto the corresponding page
    $radios_choice=$form_state['values']['rescategory'];
    
    //update the primary category id of current user in researchers table
    //first find if user change their choice
    //get the previous primary id from ff_researchers
    $previous_pid=db_query("select primary_cid from {ff_researchers} where id=:rid",array(':rid' => $curuserid))->fetchField();
    
    if($radios_choice!=$previous_pid){ //if current choice differ from previous one, then delete previous subcategories related with this pid
        
        //if different with previous and previous records existed,then delete all previous primary subcategories i.e. fromid=1
        $fromid=1; //means this subcategories from primary cid
        $db_ridexisted=db_query("select count(*) from {ff_researchers_subcategories} where rid=:rid and fromid=:fromid and sid in (select id from ff_subcategories where cid=:cid)",array(':rid' => $curuserid,':fromid' => $fromid,':cid' => $previous_pid))->fetchField();
        
        if($db_ridexisted!=0){//if there is records in subcategories table, then delete before insert new one
            
            $dbsubcres_delete = db_query("delete from {ff_researchers_subcategories} where rid=:rid and fromid=:fromid 
            and sid in (select id from ff_subcategories where cid=:cid)",array(':rid' => $curuserid,':fromid' => $fromid,':cid' => $previous_pid));
        }
        
        try{
        $rescid_updated = db_update('ff_researchers') // Table name no longer needs {}
        ->fields(array(
        'primary_cid' => $radios_choice,
        ))
        ->condition('id',$curuserid, '=')
        ->execute();
        
        }catch(PDOException $e){
            drupal_set_message(
            "An unexpected error has occurred-When Primary cid stored into database");
        }
        
    }
    
    $pagegoto_number=$radios_choice+2; //base on page2 
    $pagegoto_url='ffresform/research_form_page'.$pagegoto_number; //cat url string
    
    drupal_goto($pagegoto_url,$urloptions);
            
}
