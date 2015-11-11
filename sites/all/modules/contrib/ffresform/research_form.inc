<?php

function form_my_research_form($form, &$form_state) {
    $form['maindescription'] = array( //main description about this questionnaire
        '#type'=> 'item',
        '#title' => t('Benefunder connects philanthropists to researchers to support cutting-edge research programs in the sciences and the arts.
        Like patron funding, Benefunder seeks to create lasting relationships between donors and researchers, to support and engage with a long-term 
        vision.This process is driven by our scalable matching platform with national reach.<br>
        <br>
        Our goal is to connect you with relevant donors. The following questionnaire asks for detailed information about your research, to drive our
        matching algorithms. It also helps us to present your work clearly to donors who are interested in your studies.<br>
        <br>
        It is important that you take the time to answer each question the best you can. Expect to spend 15-25 minutes. It is required that you 
        complete the questionnaire in one session. If you would like to prepare your answers in advance, you can find an overview of the questions attached 
        to the email that linked to this form.<br>
        <br>
        This questionnaire is the first in a series of questionnaires we will present to you over the next months, to further refine your Benefunder profile.
        ')
    );
    
    $curuserid=$_SERVER['REQUEST_URI']; //get the current url to find if there is a userid exited
    if(strpos($curuserid,'userid')){ //strict compare to avoid potential mistakes
        $curuserid=$_GET['userid']; //if the url contains a userid, then store the userid into the hiddenfield
    }else{
        $curuserid=0; //else set the userid to default 0 then generate a new id for this user
    }
    
    //print($curuserid);
    
    $form['hiddenuserid']=array(  //initialize a form hidden to store the userid to retrieve in submit
        '#type' => 'hidden',
        '#value' => $curuserid
    );
    
    $form['continuenextpage'] = array(  //next page button
        '#type' => 'submit',
        '#value' => t('Start'),
        '#name' => 'continue'
    );
   
    return $form;
}




function form_my_research_form_submit($form, &$form_state){
//need add db pass the userid in url
     $curuserid=$form_state['values']['hiddenuserid']; //get the current userid in the form hiddenuserid
     if($curuserid==0){
     //if there is no userid, then generate a new one using ff_rid auto increment
        $curid=db_query("select max(id) from {ff_rid}")->fetchField();
        $curid=$curid+1; //add one to insert
        
        $dbrid_resultname = db_insert('ff_rid') //insert into the ff_rid table
        ->fields(array(
        'id' => $curid
        ))
        ->execute();
        $urloptions = array('query' => array('userid' => $curid));
        drupal_goto('ffresform/research_form_page1',$urloptions);
     }else{ //if there is a assigned rid in the url,then use this rid pass to next page
        $urloptions = array('query' => array('userid' => $curuserid));
        drupal_goto('ffresform/research_form_page1',$urloptions);
     }
     
}

