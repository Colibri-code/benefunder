<?php 
//page 5 form and submit 
function form_my_research_form_page5($form, &$form_state) {
    
    $curuserid=$_GET['userid']; //get current user id which passed from the previous url
    
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
    $p5_cbop=array(1 => t('Cardiovascular (Heart)'),
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
    
    
    $form['p5cbchoice'] = array(
        '#type' => 'checkboxes',
        '#options' => drupal_map_assoc($p5_cbop),
        '#title' => t('Subcategory options'),
        '#required' => TRUE
    );
    
    
    $form['back']['#markup'] = "<input type='button' class='form-submit' value='Back' onclick='window.history.go(-1)'/>";
    
    $form['continuebutton'] = array( //final submit button
        '#type' => 'submit',
        '#value' => t('Continue')
        
    );
    
    return $form;
}

function form_my_research_form_page5_validate($form, &$form_state) {
 
    $cb_subid=array_filter($form_state['values']['p5cbchoice']);
    
    if (sizeof($cb_subid) > 4) {
        form_set_error('Subcategory', 'Please provide at most 4 choices');
    }
}

function form_my_research_form_page5_submit($form, &$form_state){
    //add the submit function here, the function related with database
    
    $curuserid=$form_state['values']['hiddenuserid'];    
    $urloptions = array('query' => array('userid' => $curuserid)); //pass current userid to next page
   
    //insert researchers's subcategory choices into researchers_subcategory table
    //get the subcategory checkboxes' return value
    $cb_subid=array_filter($form_state['values']['p5cbchoice']);
    
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
    $curprimary_cid=db_query("select primary_cid from {ff_researchers} where id=:rid",array(':rid' => $curuserid))->fetchField();
    $curfromid=1; //page3-page6 belong to primary subcategories,so set the fromid to 1 
    $db_ridexisted=db_query("select count(*) from {ff_researchers_subcategories} where rid=:rid and fromid=:fromid",array(':rid' => $curuserid,':fromid'=>$curfromid))->fetchField();
        
    if($db_ridexisted!=0){//if there is records in info session table, then delete before insert new one
        
        
        $dbsubcres_delete = db_query("delete from {ff_researchers_subcategories} where rid=:rid 
        and fromid=:fromid and sid in (select id from ff_subcategories where cid=:cid)",
        array(':rid' => $curuserid,':fromid'=>$curfromid,':cid' => $curprimary_cid));
        

        if($dbsubcres_delete){ //if delete successfully, then insert new records
            foreach($cb_subid as $returncbid){
                $cur_key=array_search($returncbid,$cbop_submit);
                //start insert each choice
                $dbsubid_resultname = db_merge('ff_researchers_subcategories') 
                ->key(array('rid' => $curuserid,'sid'=>$cur_key,'fromid'=>$curfromid))
                ->fields(array(
                'rid' => $curuserid,
                'sid' => $cur_key,
                'fromid' => $curfromid
                ))
                ->execute();
            }
    
        }else{
            drupal_set_message("Database delete fail!");
        }
        
    }else{//if there is no records then just insert new one
        foreach($cb_subid as $returncbid){
            $cur_key=array_search($returncbid,$cbop_submit);
            //start insert each choice
            $dbsubid_resultname = db_merge('ff_researchers_subcategories') 
            ->key(array('rid' => $curuserid,'sid'=>$cur_key,'fromid'=>$curfromid))
            ->fields(array(
            'rid' => $curuserid,
            'sid' => $cur_key,
            'fromid' => $curfromid
            ))
            ->execute();
        }
    
    }
    
    drupal_goto('ffresform/research_form_page7',$urloptions);  
   
    
            
}

