<?php
//page 18 form and submit 
function form_my_research_form_page18($form, &$form_state) {
    
    $curuserid=$_GET['userid']; //get current user id which passed from the previous url
    
    
    $form['hiddenuserid']=array(  //initialize a form hidden to store the userid to retrieve in submit
        '#type' => 'hidden',
        '#value' => $curuserid,
    );

    //researchers company radios
    $form['patents'] = array(
        '#type' => 'radios',
        '#title' => t('Have you filed disclosures or patents, and/or been awarded patents?'),
        '#options' => array(1 => 'Yes', 2 => 'No')
    );
    
    $form['back']['#markup'] = "<input type='button' class='form-submit' value='Back' onclick='window.history.go(-1)'/>";
    
    $form['continuebutton'] = array( 
        '#type' => 'submit',
        '#value' => t('Continue'),
        '#name' => 'continue'
        
    );
    
    return $form;
}

function form_my_research_form_page18_submit($form, &$form_state){
    //add the submit function here, the function related with database
    
    $curuserid=$form_state['values']['hiddenuserid'];    
    $urloptions = array('query' => array('userid' => $curuserid)); //pass current userid to next page
    
    $userchoice_radios=$form_state['values']['patents'];
    
    if($userchoice_radios==1){  //split the yes to no and skip to pass company initial id
        
        drupal_goto('ffresform/research_form_page19',$urloptions); //goto the next page19 if yes
    }else{
        //delete all existed records related with this user
        //before insert, delete the existed records related with this user
            $db_ridexisted=db_query("select count(*) from {ff_researchers_patents} where rid=:rid",array(':rid' => $curuserid))->fetchField();
            if($db_ridexisted!=0){//if there is records in patents table, then delete before insert new one
                $dbkey_delete = db_query("delete from {ff_researchers_patents} where rid=:rid",array(':rid' => $curuserid));
            }
            //similar to all patents details table
            //patent awarded
            $dbpa_ridexisted=db_query("select count(*) from {ff_researchers_patents_awarded} where rid=:rid",array(':rid' => $curuserid))->fetchField();
            if($dbpa_ridexisted!=0){//if there is records in patents table, then delete before insert new one
                $dbkey_delete = db_query("delete from {ff_researchers_patents_awarded} where rid=:rid",array(':rid' => $curuserid));
            }
            //patent pending
            $dbpp_ridexisted=db_query("select count(*) from {ff_researchers_patents_pending} where rid=:rid",array(':rid' => $curuserid))->fetchField();
            if($dbpp_ridexisted!=0){//if there is records in patents table, then delete before insert new one
                $dbkey_delete = db_query("delete from {ff_researchers_patents_pending} where rid=:rid",array(':rid' => $curuserid));
            }
            //patent disclosure
            $dbpd_ridexisted=db_query("select count(*) from {ff_researchers_disclosures_filed} where rid=:rid",array(':rid' => $curuserid))->fetchField();
            if($dbpd_ridexisted!=0){//if there is records in patents table, then delete before insert new one
                $dbkey_delete = db_query("delete from {ff_researchers_disclosures_filed} where rid=:rid",array(':rid' => $curuserid));
            }
            
        drupal_goto('ffresform/research_form_page20',$urloptions); //if skip/no option to page 20
    }
    
}