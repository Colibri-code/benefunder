<?php
//page 21 form thank you page
function form_my_research_form_page21($form, &$form_state) {
    
    $curuserid=$_GET['userid'];

    $form['hiddenuserid']=array(  //initialize a form hidden to store the userid to retrieve in submit
        '#type' => 'hidden',
        '#value' => $curuserid,
    );
   
    $form['maindescription'] = array( 
        '#type'=> 'item',
        '#title' => t('Your questionnaire has been submitted successfully!')
    );
    $form['back']['#markup'] = "<input type='button' class='form-submit' value='Back' onclick='window.history.go(-1)'/>";
    
    $form['startnewbutton'] = array( 
        '#type' => 'submit',
        '#value' => t('Start a new questionnaire')
    );

    $form['back'] = array(
      '#type' => 'submit',
      '#value' => t('Back'),
      '#name' => 'back',
      '#submit' => array('go_back'),
      '#limit_validation_errors' => array(
        array('hiddenuserid')),
    );
    
    return $form;
}


function go_back($form, &$form_state){
    $curuserid=$form_state['values']['hiddenuserid'];    
    $urloptions = array('query' => array('userid' => $curuserid)); 
    drupal_goto('ffresform/research_form_page20',$urloptions);
}

function form_my_research_form_page21_submit($form, &$form_state){
    drupal_goto('ffresform/research_form'); //goto the start page
}
