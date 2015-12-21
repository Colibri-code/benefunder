<?php
//page 19 form and submit 
function form_my_research_form_page19($form, &$form_state) {
    
    $curuserid=$_GET['userid']; //get current user id which passed from the previous url
    $numberOfPatentsAwarded = 1;
    $numberOfPatentsPending = 1;
    $numberOfDisclosures = 1;
    $patentsAwarded = "";
    $patentsPending = "";
    $disclosures = "";

    $result=db_query("select * from {ff_researchers_patents} where rid=:rid",array(':rid' => $curuserid));
    if ($result) {
      while ($row = $result->fetchAssoc()) {
        $numberOfPatentsAwarded = $row['num_awarded'];
        $numberOfPatentsPending = $row['num_pending'];
        $numberOfDisclosures = $row['num_disclosures'];
      }
    }

    $result=db_query("select * from {ff_researchers_patents_awarded} where rid=:rid",array(':rid' => $curuserid));
    if ($result) {
      while ($row = $result->fetchAssoc()) {
        $patentsAwarded = $row['awarded'];
      }
    }

    $result=db_query("select * from {ff_researchers_patents_pending} where rid=:rid",array(':rid' => $curuserid));
    if ($result) {
      while ($row = $result->fetchAssoc()) {
        $patentsPending = $row['pending'];
      }
    }

    $result=db_query("select * from {ff_researchers_disclosures_filed} where rid=:rid",array(':rid' => $curuserid));
    if ($result) {
      while ($row = $result->fetchAssoc()) {
        $disclosures = $row['filed'];
      }
    }
    
    $form['hiddenuserid']=array(  //initialize a form hidden to store the userid to retrieve in submit
        '#type' => 'hidden',
        '#value' => $curuserid,
    );
   $numradios_op = array(1 => t('none'), 
    2 => t('1-3'),
    3 => t('4-10'),
    4 => t('more than 10')
    );
    
    $form['patentawarded'] = array(
        '#type' => 'radios',
        '#title' => t('Number of patents awarded:'),
        '#options' => $numradios_op,
        '#default_value' => $numberOfPatentsAwarded,
        '#required' => TRUE
    );
    $form['patentpending'] = array(
        '#type' => 'radios',
        '#title' => t('Number of patents pending (not included above)'),
        '#options' => $numradios_op,
        '#default_value' => $numberOfPatentsPending,
        '#required' => TRUE
    );
    
    $form['disclosuresfiled'] = array(
        '#type' => 'radios',
        '#title' => t('Number of disclosures filed (not included above) '),
        '#options' => $numradios_op,
        '#default_value' => $numberOfDisclosures,
        '#required' => TRUE
    );
    $form['patentawarded_details'] = array(
        '#type' => 'textarea',
        '#default_value' => $patentsAwarded,
        '#title' => 'For each patent awarded, please provide title and patent number.'
    );
    $form['patentpending_details'] = array(
        '#type' => 'textarea',
        '#default_value' => $patentsPending,
        '#title' => 'For each patent pending, please provide title and patent number.'
    );
    $form['disclosuresfiled_details'] = array(
        '#type' => 'textarea',
        '#default_value' => $disclosures,
        '#title' => 'For each disclosure filed, please provide title, provisional number and abstract.'
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
        '#value' => t('Continue')
        
    );
    
    return $form;
}


function go_back($form, &$form_state){
    $curuserid=$form_state['values']['hiddenuserid'];    
    $urloptions = array('query' => array('userid' => $curuserid)); 
    drupal_goto('ffresform/research_form_page18',$urloptions);
}

function form_my_research_form_page19_submit($form, &$form_state){
    //add the submit function here, the function related with database
    
    $curuserid=$form_state['values']['hiddenuserid'];    
    $urloptions = array('query' => array('userid' => $curuserid)); //pass current userid to next page
    
            
    $patentaward=$form_state['values']['patentawarded'];
    
    $patentpending=$form_state['values']['patentpending'];
    
    $patentdis=$form_state['values']['disclosuresfiled'];
    //before insert, delete the existed one
    $db_ridexisted=db_query("select count(*) from {ff_researchers_patents} where rid=:rid",array(':rid' => $curuserid))->fetchField();
    if($db_ridexisted!=0){//if there is records in patents table, then delete before insert new one
        $dbkey_delete = db_query("delete from {ff_researchers_patents} where rid=:rid",array(':rid' => $curuserid));
    }
    
    //insert all the patents' information into patents table
    $dbpatent_result = db_merge('ff_researchers_patents')  //insert researchers and company into table
    ->key(array('rid' => $curuserid))
    ->fields(array(
    'rid' => $curuserid,
    'num_awarded' => $patentaward,
    'num_pending' => $patentpending,
    'num_disclosures' => $patentdis
    ))
    ->execute();    
    
    //before insert delete all old details records
    //patent awarded details
    $dbpa_ridexisted=db_query("select count(*) from {ff_researchers_patents_awarded} where rid=:rid",array(':rid' => $curuserid))->fetchField();
    if($dbpa_ridexisted!=0){//if there is records in patents table, then delete before insert new one
        $dbkey_delete = db_query("delete from {ff_researchers_patents_awarded} where rid=:rid",array(':rid' => $curuserid));
    }
    //patent pending details
    $dbpp_ridexisted=db_query("select count(*) from {ff_researchers_patents_pending} where rid=:rid",array(':rid' => $curuserid))->fetchField();
    if($dbpp_ridexisted!=0){//if there is records in patents table, then delete before insert new one
        $dbkey_delete = db_query("delete from {ff_researchers_patents_pending} where rid=:rid",array(':rid' => $curuserid));
    }
    //patent disclosure details
    $dbpd_ridexisted=db_query("select count(*) from {ff_researchers_disclosures_filed} where rid=:rid",array(':rid' => $curuserid))->fetchField();
    if($dbpd_ridexisted!=0){//if there is records in patents table, then delete before insert new one
        $dbkey_delete = db_query("delete from {ff_researchers_disclosures_filed} where rid=:rid",array(':rid' => $curuserid));
    } 
    
    //get patent details
    $award_details=$form_state['values']['patentawarded_details'];
    $pending_details=$form_state['values']['patentpending_details'];
    $disclosure_details=$form_state['values']['disclosuresfiled_details'];
    
    //trim users input to avoid insert blank into database
    //replace all the whitespace and hidden placeholder to avoid insert blank into database
    
    $award_detailstrim=trim($award_details," ");
    if($award_detailstrim!=null){
        $award_details=trim($award_details," ");
    	$award_details=trim($award_details);    
	    $award_details=trim($award_details,"\x00..\x1F");
    	$dbpatent_result = db_merge('ff_researchers_patents_awarded')  //insert researchers and company into table
      ->key(array('rid' => $curuserid))
      ->fields(array(
      'rid' => $curuserid,
      'awarded' => $award_details
      ))
      ->execute();
    }
    $pending_detailstrim=trim($pending_details," ");
    if($pending_detailstrim!=null){
        $pending_details=trim($pending_details," ");
    	$pending_details=trim($pending_details);    
	    $pending_details=trim($pending_details,"\x00..\x1F");
    	$dbpatent_result = db_merge('ff_researchers_patents_pending')  //insert researchers and company into table
      ->key(array('rid' => $curuserid))
      ->fields(array(
      'rid' => $curuserid,
      'pending' => $pending_details
      ))
      ->execute();
    }
    
    $disclosure_detailstrim=trim($disclosure_details," ");
    if($disclosure_detailstrim!=null){
        $disclosure_details=trim($disclosure_details,' ');
    	$disclosure_details=trim($disclosure_details);  
	    $disclosure_details=trim($disclosure_details,"\x00..\x1F");
    	$dbpatent_result = db_merge('ff_researchers_disclosures_filed')  //insert researchers and company into table
      ->key(array('rid' => $curuserid))
      ->fields(array(
      'rid' => $curuserid,
      'filed' => $disclosure_details
      ))
      ->execute();
    }
    
    drupal_goto('ffresform/research_form_page20',$urloptions); //goto the next page
}
