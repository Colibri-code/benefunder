<?php
//page 19 form and submit 
function form_my_research_form_page19($form, &$form_state) {
    
    $curuserid=$_GET['userid']; //get current user id which passed from the previous url
    
    
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
        '#options' => drupal_map_assoc($numradios_op),
        '#required' => TRUE
    );
    $form['patentpending'] = array(
        '#type' => 'radios',
        '#title' => t('Number of patents pending (not included above)'),
        '#options' => drupal_map_assoc($numradios_op),
        '#required' => TRUE
    );
    
    $form['disclosuresfiled'] = array(
        '#type' => 'radios',
        '#title' => t('Number of disclosures filed (not included above) '),
        '#options' => drupal_map_assoc($numradios_op),
        '#required' => TRUE
    );
    $form['patentawarded_details'] = array(
        '#type' => 'textarea',
        '#title' => 'For each patent awarded, please provide title and patent number.'
    );
    $form['patentpending_details'] = array(
        '#type' => 'textarea',
        '#title' => 'For each patent pending, please provide title and patent number.'
    );
    $form['disclosuresfiled_details'] = array(
        '#type' => 'textarea',
        '#title' => 'For each disclosure filed, please provide title, provisional number and abstract.'
    );
    
    $form['back']['#markup'] = "<input type='button' class='form-submit' value='Back' onclick='window.history.go(-1)'/>";
    
    $form['continuebutton'] = array( 
        '#type' => 'submit',
        '#value' => t('Continue')
        
    );
    
    return $form;
}

function form_my_research_form_page19_submit($form, &$form_state){
    //add the submit function here, the function related with database
    
    $curuserid=$form_state['values']['hiddenuserid'];    
    $urloptions = array('query' => array('userid' => $curuserid)); //pass current userid to next page
    
            
    //change the patent number value string to key to store into db
    
    $num_op_submit = array(1 => t('none'), 
    2 => t('1-3'),
    3 => t('4-10'),
    4 => t('more than 10')
    );
    $patentaward=$form_state['values']['patentawarded'];
    $patentaward=array_search($patentaward,$num_op_submit); 
    
    $patentpending=$form_state['values']['patentpending'];
    $patentpending=array_search($patentpending,$num_op_submit);
    
    $patentdis=$form_state['values']['disclosuresfiled'];
    $patentdis=array_search($patentdis,$num_op_submit);
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
