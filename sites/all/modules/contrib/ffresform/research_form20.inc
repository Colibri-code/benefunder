<?php
//page 20 form and submit 
function form_my_research_form_page20($form, &$form_state) {
    
    $curuserid=$_GET['userid']; //get current user id which passed from the previous url
    $engagements = array(2, 2, 2, 2, 2, 2, 2, 2);
    $suggestion = '';

    $primary_cid = 0;
    $result=db_query("select * from {ff_researchers_engagements} where rid=:rid",array(':rid' => $curuserid));
    if ($result) {
      while ($row = $result->fetchAssoc()) {
        $engagements[ $row['eid']-1] = $row['oid'];
      }
    }

    $result=db_query("select * from {ff_researchers_suggestions} where rid=:rid",array(':rid' => $curuserid));
    if ($result) {
      while ($row = $result->fetchAssoc()) {
        $suggestion = $row['suggestions'];
      }
    }

    $form['hiddenuserid']=array(  //initialize a form hidden to store the userid to retrieve in submit
        '#type' => 'hidden',
        '#value' => $curuserid,
    );
   
    $form['maindescription'] = array( 
        '#type'=> 'item',
        '#title' => t('How do you envision engaging with donors, besides standard Benefunder updates?')
    );
    $form['maindescription'] = array( 
        '#type'=> 'item',
        '#title' => t('Indicate which engagement you would be willing to provide.'),
        '#required' => TRUE
    );
    
    $form['selectedengage1'] = array(
       '#type' => 'select',
       '#title' => t('Host donor and their family at an annual open house or lab showcase'),
       '#options' => array(
          1 => t('No'),
          2 => t('Yes, for any donor'),
          3 => t('Yes, for donations above $25,000'),
          4 => t('Yes, for donations above $100,000')
       ),
       '#default_value' => $engagements[0],
       '#required' => TRUE
   );
   $form['selectedengage2'] = array(
       '#type' => 'select',
       '#title' => t('Host donor in my lab for a month to "experience" my research'),
       '#options' => array(
          1 => t('No'),
          2 => t('Yes, for any donor'),
          3 => t('Yes, for donations above $25,000'),
          4 => t('Yes, for donations above $100,000')
       ),
       '#default_value' =>$engagements[1],
       '#required' => TRUE
   );
   $form['selectedengage3'] = array(
       '#type' => 'select',
       '#title' => t('Take donor out in the field where I do my research'),
       '#options' => array(
          1 => t('No'),
          2 => t('Yes, for any donor'),
          3 => t('Yes, for donations above $25,000'),
          4 => t('Yes, for donations above $100,000')
       ),
       '#default_value' =>$engagements[2],
       '#required' => TRUE
   );
   $form['selectedengage4'] = array(
       '#type' => 'select',
       '#title' => t('Have dinner with donor once a year'),
       '#options' => array(
          1 => t('No'),
          2 => t('Yes, for any donor'),
          3 => t('Yes, for donations above $25,000'),
          4 => t('Yes, for donations above $100,000')
       ),
       '#default_value' =>$engagements[3],
       '#required' => TRUE
   );
   $form['selectedengage5'] = array(
       '#type' => 'select',
       '#title' => t('Have dinner with donor twice a year'),
       '#options' => array(
          1 => t('No'),
          2 => t('Yes, for any donor'),
          3 => t('Yes, for donations above $25,000'),
          4 => t('Yes, for donations above $100,000')
       ),
       '#default_value' =>$engagements[4],
       '#required' => TRUE
   );
   $form['selectedengage6'] = array(
       '#type' => 'select',
       '#title' => t('Discuss start-up opportunities (including possible investment) with donors'),
       '#options' => array(
          1 => t('No'),
          2 => t('Yes, for any donor'),
          3 => t('Yes, for donations above $25,000'),
          4 => t('Yes, for donations above $100,000')
       ),
       '#default_value' =>$engagements[5],
       '#required' => TRUE
   );
   $form['selectedengage7'] = array(
       '#type' => 'select',
       '#title' => t('Provide donor with exclusive access (e.g. add instrument to space mission; scan musical experiences of their brain)'),
       '#options' => array(
          1 => t('No'),
          2 => t('Yes, for any donor'),
          3 => t('Yes, for donations above $25,000'),
          4 => t('Yes, for donations above $100,000')
       ),
       '#default_value' =>$engagements[6],
       '#required' => TRUE
   );
   $form['selectedengage8'] = array(
       '#type' => 'select',
       '#title' => t('Provide donor pre-publication sneak peek at my latest book or paper'),
       '#options' => array(
          1 => t('No'),
          2 => t('Yes, for any donor'),
          3 => t('Yes, for donations above $25,000'),
          4 => t('Yes, for donations above $100,000')
       ),
       '#default_value' =>$engagements[7],
       '#required' => TRUE
   );
    
    $form['suggestion'] = array( 
        '#type'=> 'item',
        '#title' => t('Get creative: add your own suggestions here.')
    );
    $form['suggestiontext'] = array( 
        '#type'=> 'textarea',
        '#default_value' =>$suggestion,
        '#title' => t('Feel free to indicate a minimum donation level 
        for each suggestion you provide.')
    );
    
    $form['back'] = array(
      '#type' => 'submit',
      '#value' => t('Back'),
      '#name' => 'back',
      '#submit' => array('go_back'),
      '#limit_validation_errors' => array(
        array('hiddenuserid')),
    );
    
    $form['continuebutton'] = array( 
        '#type' => 'submit',
        '#value' => t('Submit'),
        '#name' =>'lastsubmit'
    );
    
    return $form;
}

function go_back($form, &$form_state){

    $pagegoto_number= 18; //if user does not have patent go the page 19
    $curuserid=$form_state['values']['hiddenuserid'];    
    $result=db_query("select * from {ff_researchers_patents} where rid=:rid",array(':rid' => $curuserid));
    if ($result) {
      while ($row = $result->fetchAssoc()) {
        //if patent exists goto second page of patent
        if($row['num_awarded'] != null){
          $pagegoto_number = $pagegoto_number + 1;
        }
      }
    }

    $pagegoto_url='ffresform/research_form_page'.$pagegoto_number; //cat url string
    $urloptions = array('query' => array('userid' => $curuserid)); 
    drupal_goto($pagegoto_url,$urloptions);
}

function form_my_research_form_page20_submit($form, &$form_state){
    //add the submit function here, the function related with database
    
    $curuserid=$form_state['values']['hiddenuserid'];    
    $urloptions = array('query' => array('userid' => $curuserid)); //pass current userid to next page
    
    //delete existed records related with this user,then insert
    $db_ridexisted=db_query("select count(*) from {ff_researchers_engagements} where rid=:rid",array(':rid' => $curuserid))->fetchField();
    if($db_ridexisted!=0){//if there is records in engagements relation table, then delete before insert new one
        $dbkey_delete = db_query("delete from {ff_researchers_engagements} where rid=:rid",array(':rid' => $curuserid));
    }
       
    //define to store the engagement id
    $engagement_questionid='';
    $select_return=0;
    for($engagement_seed=1;$engagement_seed<=8;$engagement_seed++){
        $engagement_questionid='selectedengage'.$engagement_seed;
        $select_return=$form_state['values'][$engagement_questionid];
        
        //insert into researchers engagement table
        $dbengage_result = db_merge('ff_researchers_engagements')  //insert researchers and company into table
        ->key(array('rid' => $curuserid,'eid' => $engagement_seed))
        ->fields(array(
        'rid' => $curuserid,
        'eid' => $engagement_seed,
        'oid' => $select_return
        ))
        ->execute();
    }
    
    
    $db_suggexisted=db_query("select count(*) from {ff_researchers_suggestions} where rid=:rid",array(':rid' => $curuserid))->fetchField();
    if($db_suggexisted!=0){//if there is records in suggestions relation table, then delete before insert new one
        $dbkey_delete = db_query("delete from {ff_researchers_suggestions} where rid=:rid",array(':rid' => $curuserid));
    }
    //insert user suggestiontext    
    $user_suggestion=$form_state['values']['suggestiontext'];
    //trim first
    $user_suggestion=trim($user_suggestion," ");
    $user_suggestion=trim($user_suggestion);
    $user_suggestion=trim($user_suggestion,"\x00..\x1F");
    
    if($user_suggestion!=null){
		    
        $dbsuggest_result = db_merge('ff_researchers_suggestions')  //insert researchers and company into table
        ->key(array('rid' => $curuserid))
        ->fields(array(
        'rid' => $curuserid,
        'suggestions' => $user_suggestion
        ))
        ->execute();
    }    
    
    drupal_goto('ffresform/research_form_page21',$urloptions); //goto the next page
}
