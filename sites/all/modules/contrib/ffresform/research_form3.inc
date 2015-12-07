<?php
//page 3 form and submit 
function form_my_research_form_page3($form, &$form_state) {
    
    $curuserid=$_GET['userid']; //get current user id which passed from the previous url
    
    $p3cbchoice = array();
    $result=db_query("select * from {ff_researchers_subcategories} where rid=:rid",array(':rid' => $curuserid));
    if ($result) {
      while ($row = $result->fetchAssoc()) {
        array_push($p3cbchoice, $row['sid']);
      }
    }

    $form['hiddenuserid']=array(  //initialize a form hidden to store the userid to retrieve in submit
        '#type' => 'hidden',
        '#value' => $curuserid,
    );
    $form['maintitle'] = array(
        '#type' => 'item',
        '#title' => t('Which of the below subcategories best describe your research?
        <br>
        To help donors further understand the depth of your research, please select 1-4 
        subcategories. Only select a subcategory if it constitutes at least 10% of your research program.'),
        '#required' => TRUE
    );
   
    //extract research subcategories from db using js 
    //when js extract the subcategories then update the checkboxs options 
    
    //build the checkboxes for the subcategory
    $subcid_seed=41;
    
    $p3_cbop=array(42 => t('Anthropology'),
    43 => t('Archaeology'),
    44 => t('Economics'),
    45 => t('Education'),
    46 => t('History'),
    47 => t('Law / Ethics'),
    48 => t('Linguistics / Language Cognition'),
    49 => t('Literary Arts'),
    50 => t('Music'),
    51 => t('Performing Arts'),
    52 => t('Political Science'),
    53 => t('Psychology'),
    54 => t('Sociology'),
    55 => t('Visual Arts')
    );
    
    $form['p3cbchoice'] = array(
        '#type' => 'checkboxes',
        '#options' => $p3_cbop,
        '#title' => t('Subcategory options'),
        '#default_value' => $p3cbchoice,
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
        '#value' => t('Continue')
        
    );
    
    return $form;
}

function go_back($form, &$form_state){
    $curuserid=$form_state['values']['hiddenuserid'];    
    $urloptions = array('query' => array('userid' => $curuserid)); 
    drupal_goto('ffresform/research_form_page2',$urloptions);
}

function form_my_research_form_page3_validate($form, &$form_state) {
 
    $cb_subid=array_filter($form_state['values']['p3cbchoice']);
    
    if (sizeof($cb_subid) > 4) {
        form_set_error('Subcategory', 'Please provide at most 4 choices');
    }
}

function form_my_research_form_page3_submit($form, &$form_state){
    //add the submit function here, the function related with database
    
    $curuserid=$form_state['values']['hiddenuserid'];    
    $urloptions = array('query' => array('userid' => $curuserid)); //pass current userid to next page
    
    //insert researchers's subcategory choices into researchers_subcategory table
    //get the subcategory checkboxes' return value
    $cb_subid=array_filter($form_state['values']['p3cbchoice']);
    
    //before insert or update the subcategory, delete all the existed records related with this user
    $curprimary_cid=db_query("select primary_cid from {ff_researchers} where id=:rid",array(':rid' => $curuserid))->fetchField();
    $curfromid=1; //page3-page6 belong to primary subcategories,so set the fromid to 1 
    $db_ridexisted=db_query("select count(*) from {ff_researchers_subcategories} where rid=:rid and fromid=:fromid",array(':rid' => $curuserid,':fromid'=>$curfromid))->fetchField();
        
    if($db_ridexisted!=0){//if there is records in info session table, then delete before insert new one
        
        
        $dbsubcres_delete = db_query("delete from {ff_researchers_subcategories} where rid=:rid 
        and fromid=:fromid and sid in (select id from ff_subcategories where cid=:cid)",
        array(':rid' => $curuserid,':fromid'=>$curfromid,':cid' => $curprimary_cid));
        

        if($dbsubcres_delete){ //if delete successfully, then insert new records
            foreach($cb_subid as $returncbid){
                //start insert each choice
                $dbsubid_resultname = db_merge('ff_researchers_subcategories') 
                ->key(array('rid' => $curuserid,'sid'=>$returncbid,'fromid'=>$curfromid))
                ->fields(array(
                'rid' => $curuserid,
                'sid' => $returncbid,
                'fromid' => $curfromid
                ))
                ->execute();
            }
    
        }else{
            drupal_set_message("Database delete fail!");
        }
        
    }else{//if there is no records then just insert new one
        foreach($cb_subid as $returncbid){
            //start insert each choice
            $dbsubid_resultname = db_merge('ff_researchers_subcategories') 
            ->key(array('rid' => $curuserid,'sid'=>$returncbid,'fromid'=>$curfromid))
            ->fields(array(
            'rid' => $curuserid,
            'sid' => $returncbid,
            'fromid' => $curfromid
            ))
            ->execute();
        }
    
    }
    
            
    drupal_goto('ffresform/research_form_page7',$urloptions);  
   
}
