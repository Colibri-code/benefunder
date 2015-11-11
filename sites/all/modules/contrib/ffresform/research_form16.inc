<?php
//page 16 form and submit 
function form_my_research_form_page16($form, &$form_state) {
    
    $curuserid=$_GET['userid']; //get current user id which passed from the previous url
    
    
    $form['hiddenuserid']=array(  //initialize a form hidden to store the userid to retrieve in submit
        '#type' => 'hidden',
        '#value' => $curuserid,
    );
    
    $form['maindesp'] = array(
        '#type' => 'item',
        '#title' => t('This section pertains to applied research programs.')
    );
    
    //researchers company radios
    $form['rescompany'] = array(
        '#type' => 'radios',
        '#title' => t('Have any companies been successfully spun out of your research lab?'),
        '#options' => array(1 => 'Yes', 2 => 'No'),
        '#default_value' => 0
    );
    
    
    $form['back']['#markup'] = "<input type='button' class='form-submit' value='Back' onclick='window.history.go(-1)'/>";
    
    $form['continuebutton'] = array( 
        '#type' => 'submit',
        '#value' => t('Continue')
        
    );
    
    return $form;
}

function form_my_research_form_page16_submit($form, &$form_state){
    //add the submit function here, the function related with database
    
    $curuserid=$form_state['values']['hiddenuserid'];    
    $urloptionscom = array('query' => array('userid' => $curuserid,'comid' => 1)); //pass current userid to next page and company initial id if choose company
    
    
    $urloptions = array('query' => array('userid' => $curuserid)); 
    
    $userchoice_radios=$form_state['values']['rescompany'];
    if($userchoice_radios==1){  //split the yes and no-skip to pass company initial id
        
        drupal_goto('ffresform/research_form_page17',$urloptionscom); //goto the next page17 if yes
    }else{
        //delete the existed this user related companies if there is no or skip
        $db_ridexisted=db_query("select count(*) from {ff_researchers_companies} where rid=:rid",array(':rid' => $curuserid))->fetchField();
    
        if($db_ridexisted!=0){//if there is records in descriptors table, then delete before insert new one
            $dbkey_delete = db_query("delete from {ff_researchers_companies} where rid=:rid",array(':rid' => $curuserid));
        }
        
        drupal_goto('ffresform/research_form_page18',$urloptions); //if skip/no option to page 18
    }
    
}
