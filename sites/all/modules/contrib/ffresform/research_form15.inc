<?php
//page 15 form and submit 
function form_my_research_form_page15($form, &$form_state) {
    
    $curuserid=$_GET['userid']; //get current user id which passed from the previous url
    
    $form['hiddenuserid']=array(  //initialize a form hidden to store the userid to retrieve in submit
        '#type' => 'hidden',
        '#value' => $curuserid,
    );
    
    
    $form['past'] = array(
        '#type' => 'textfield',
        '#title' => t('Which significant breakthrough or major insight HAS your research contributed to (in the past)?.')
    );
    
    $form['future'] = array(
        '#type' => 'textfield',
        '#title' => t('Which significant breakthrough or major insight MAY your research contribute to (in the future)?.')
    );
    $form['potential'] = array(
        '#type' => 'textfield',
        '#title' => t('In broad terms, what are some of the potential social outcomes or impacts your research could have?'),
        '#required' => TRUE
    );
    
    $form['potentialhelp'] = array(
        '#type' => 'item',
        '#title' => t('Write 1-2 comprehensive sentences about each outcome or impact. Mention at least one example. 
        Examples: saving lives, understanding some social behavior, treating or eliminating a disease, new company formation, 
        job creation, new way of experiencing music, preventing some environmental disaster, etc.')
    );
    
    
    $form['back']['#markup'] = "<input type='button' class='form-submit' value='Back' onclick='window.history.go(-1)'/>";
    
    $form['continuebutton'] = array( 
        '#type' => 'submit',
        '#value' => t('Continue')
        
    );
    
    return $form;
}

function form_my_research_form_page15_submit($form, &$form_state){
    //add the submit function here, the function related with database
    
    $curuserid=$form_state['values']['hiddenuserid'];    
    $urloptions = array('query' => array('userid' => $curuserid)); //pass current userid to next page
    
    //before insert, delete the existed records related with this user
    $db_ridexisted=db_query("select count(*) from {ff_researchers_outcomes} where rid=:rid",array(':rid' => $curuserid))->fetchField();
    
    if($db_ridexisted!=0){//if there is records in descriptors table, then delete before insert new one
        $dbkey_delete = db_query("delete from {ff_researchers_outcomes} where rid=:rid",array(':rid' => $curuserid));
    }
    
    
    //insert user input into researchers_outcomes table
    $outcomes_past=$form_state['values']['past'];
    $outcomes_future=$form_state['values']['future'];
    $outcomes_potential=$form_state['values']['potential'];
    
    //replace all the whitespace and hidden placeholder to avoid insert blank into database 
    
    //for potential just replace all tab, ascii and enter value
    $outcomes_potential=trim($outcomes_potential," ");
    $outcomes_potential=trim($outcomes_potential);  //replace all tab
    $outcomes_potential=trim($outcomes_potential,"\x00..\x1F");
    
    $outcomes_past=trim($outcomes_past," ");
    $outcomes_past=trim($outcomes_past);   
    $outcomes_past=trim($outcomes_past,"\x00..\x1F");
    
    
    $outcomes_future=trim($outcomes_future," ");
    $outcomes_future=trim($outcomes_future);   
    $outcomes_future=trim($outcomes_future,"\x00..\x1F");
    
    if($outcomes_past==null){//if the field is empty then do not insert
        
        if($outcomes_future==null){ //just insert potential
            $dboutcomes_resultname = db_merge('ff_researchers_outcomes') 
            ->key(array('rid' => $curuserid))
            ->fields(array(
            'rid' => $curuserid,
            'potential' => $outcomes_potential,
            ))
            ->execute();
        }else{//insert future and potential
            
            $dboutcomes_resultname = db_merge('ff_researchers_outcomes') 
            ->key(array('rid' => $curuserid))
            ->fields(array(
            'rid' => $curuserid,
            'future' => $outcomes_future,
            'potential' => $outcomes_potential,
            ))
            ->execute();
        }
    }else{//insert all three field
    		//prepare to insert
    		
		    
        $dboutcomes_resultname = db_merge('ff_researchers_outcomes') 
        ->key(array('rid' => $curuserid))
        ->fields(array(
        'rid' => $curuserid,
        'past' => $outcomes_past,
        'future' => $outcomes_future,
        'potential' => $outcomes_potential,
        ))
        ->execute();
    }
    
    drupal_goto('ffresform/research_form_page16',$urloptions); //goto the next page
    
            
}
