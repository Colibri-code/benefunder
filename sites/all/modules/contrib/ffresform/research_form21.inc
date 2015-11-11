<?php
//page 21 form thank you page
function form_my_research_form_page21($form, &$form_state) {
    
    $form['maindescription'] = array( 
        '#type'=> 'item',
        '#title' => t('Your questionnaire has been submitted successfully!')
    );
    $form['back']['#markup'] = "<input type='button' class='form-submit' value='Back' onclick='window.history.go(-1)'/>";
    
    $form['startnewbutton'] = array( 
        '#type' => 'submit',
        '#value' => t('Start a new questionnaire')
    );
    
    return $form;
}

function form_my_research_form_page21_submit($form, &$form_state){
    drupal_goto('ffresform/research_form'); //goto the start page
}
