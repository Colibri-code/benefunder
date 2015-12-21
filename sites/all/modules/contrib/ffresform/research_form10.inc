<?php
//page 10 form and submit 
function form_my_research_form_page10($form, &$form_state) {
    
    $curuserid=$_GET['userid']; //get current user id which passed from the previous url
    
    $p10cbchoice = array();
    $result=db_query("select * from {ff_researchers_subcategories} where rid=:rid",array(':rid' => $curuserid));
    if ($result) {
      while ($row = $result->fetchAssoc()) {
        array_push($p10cbchoice, $row['sid']);
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
    $p10_cbop=array(1 => t('Cardiovascular (Heart)'),
    2 => t('Circulatory (Blood)'),
    3 => t('Diagnostics'),
    4 => t('Epidemiology / Public Health'),
    5 => t('Genomics / Congenital'),
    6 => t('Immunology / Inflammatory'),
    7 => t('Infectious Disease'),
    8 => t('Metabolic / Diabetes'),
    9 => t('Musculoskeletal'),
    10 => t('Neurological / Cognitive'),
    11 => t('Oncology / Cancer'),
    12 => t('Pediatrics (specifically)'),
    13 => t('Proteomics'),
    14 => t('Respiratory'),
    15 => t('Health IT'),
    16 => t('Telemedicine'),
    17 => t("Women's Health(specifically)")
    );
    
    $form['p10cbchoice'] = array(
        '#type' => 'checkboxes',
        '#options' => $p10_cbop,
        '#title' => t('Subcategory options'),
        '#default_value' => $p10cbchoice,
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
    drupal_goto('ffresform/research_form_page7',$urloptions);
}

function form_my_research_form_page10_validate($form, &$form_state) {
 
    $cb_subid=array_filter($form_state['values']['p10cbchoice']);
    
    if (sizeof($cb_subid) > 4) {
        form_set_error('Subcategory', 'Please provide at most 4 choices');
    }
}

function form_my_research_form_page10_submit($form, &$form_state){
    //add the submit function here, the function related with database
    
    $curuserid=$form_state['values']['hiddenuserid'];    
    $urloptions = array('query' => array('userid' => $curuserid)); //pass current userid to next page
    
    //insert researchers's subcategory choices into researchers_subcategory table
    //get the subcategory checkboxes' return value
    $cb_subid=array_filter($form_state['values']['p10cbchoice']);
    
    //get the original option array to find the corresponding key value to store into db researchers_subcategory table
    $cbop_submit=array(1 => t('Cardiovascular (Heart)'),
    2 => t('Circulatory (Blood)'),
    3 => t('Diagnostics'),
    4 => t('Epidemiology / Public Health'),
    5 => t('Genomics / Congenital'),
    6 => t('Immunology / Inflammatory'),
    7 => t('Infectious Disease'),
    8 => t('Metabolic / Diabetes'),
    9 => t('Musculoskeletal'),
    10 => t('Neurological / Cognitive'),
    11 => t('Oncology / Cancer'),
    12 => t('Pediatrics (specifically)'),
    13 => t('Proteomics'),
    14 => t('Respiratory'),
    15 => t('Health IT'),
    16 => t('Telemedicine'),
    17 => t("Women's Health(specifically)")
    );
    
    //before insert or update the subcategory, delete all the existed records related with this user
    $db_secondcid=db_query("select secondary_cid from {ff_researchers} where id=:rid",array(':rid' => $curuserid))->fetchField();
    $curfromid=2; //from secondary cid
    $db_ridexisted=db_query("select count(*) from {ff_researchers_subcategories} where rid=:rid and fromid=:fromid",array(':rid' => $curuserid,':fromid'=>$curfromid))->fetchField();
        
    if($db_ridexisted!=0){//if there is records in info session table, then delete before insert new one
        
        
        $dbsubcres_delete = db_query("delete from {ff_researchers_subcategories} where rid=:rid 
        and fromid=:fromid and sid in (select id from ff_subcategories where cid=:cid)",
        array(':rid' => $curuserid,':fromid'=>$curfromid,':cid' => $db_secondcid));
        

        if($dbsubcres_delete){ //if delete successfully, then insert new records
            foreach($cb_subid as $returncbid){
                //start insert each choice
                $dbsubid_resultname = db_merge('ff_researchers_subcategories') 
                ->key(array('rid' => $curuserid,'sid'=>$returncbid,'fromid' => $curfromid))
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
            ->key(array('rid' => $curuserid,'sid'=>$returncbid,'fromid' => $curfromid))
            ->fields(array(
            'rid' => $curuserid,
            'sid' => $returncbid,
            'fromid' => $curfromid
            ))
            ->execute();
        }
    
    }
    drupal_goto('ffresform/research_form_page12',$urloptions);  
}
