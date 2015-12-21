<?php
//page 17 company page
function form_my_research_form_page17($form, &$form_state) {
    $curuserid=$_GET['userid']; //get current user id which passed from the previous url
    
    $form['hiddenuserid']=array(  //initialize a form hidden to store the userid to retrieve in submit
        '#type' => 'hidden',
        '#value' => $curuserid,
    );
    
    $curcomid=$_GET['comid']; //get current company id which passed from the previous company page
    $companyName = "";
    $companyUrl = "";
    $companyStatus = array();
    $companyStatusOther = '';
    $companySize = 1;
    $investmentSummary = "";
    $companyRole = array();
    $companyRoleOther = '';
    $companyIdInDatabase = 0;

    //finding the company
    $result=db_query("select * from {ff_researchers_companies} where rid=:rid",array(':rid' => $curuserid));

    $count = 1;
    if ($result) {
      while ($row = $result->fetchAssoc()) {
       if($count == $curcomid){
            $companyIdInDatabase = $row['cid'];
       }
       $count = $count + 1;
      }
    }

    $comrole_op=array(1 => t('Advisor'),
    2 => t('Officer (CEO, CTO, CSO, etc.)'),
    3 => t('Board member'),
    4 => t('Series C or more'),
    5 => t('Investor'),
    6 => t('No role')
    );

    //getting data of the company
    $result=db_query("select * from {ff_researchers_companies_roles} where rid=:rid and cid=:cid",array(':rid' => $curuserid, ':cid' => $companyIdInDatabase));
    if ($result) {
      while ($row = $result->fetchAssoc()) {
        if (in_array($row['c_role'], $comrole_op)) {
            array_push($companyRole, $row['c_role']);
        }
        else{
            $companyRoleOther = $row['c_role'];
        }
      }
    }

    $result=db_query("select * from {ff_companies} where id=:cid",array(':cid' => $companyIdInDatabase));
    if ($result) {
      while ($row = $result->fetchAssoc()) {
        $companyName = $row['name'];
        $companyUrl = $row['url'];
        $companySize = $row['comp_size'];
        $investmentSummary = $row['inv_summary'];
      }
    }

    $comstatus_op=array(1 => t('Pre-Series A'),
    2 => t('Series A'),
    3 => t('Series B'),
    4 => t('Series C or more'),
    5 => t('Revenue'),
    6 => t('Acquired'),
    7 => t('IPO')
    );

    $result=db_query("select * from {ff_companies_status} where id=:cid",array(':cid' => $companyIdInDatabase));
    if ($result) {
      while ($row = $result->fetchAssoc()) {
        if (in_array($row['stage'], $comstatus_op)) {
            array_push($companyStatus, $row['stage']);
        }
        else{
            $companyStatusOther = $row['stage'];
        }
      }
    }

    
    $comidtitle='#'.$curcomid.' company information';
    $form['maincomid'] = array( 
        '#type'=> 'item',
        '#title' => $comidtitle,
        '#required' => TRUE
    );
    
    $form['hiddencomid']=array(  //initialize a form hidden to store the next company id to retrieve in rebuild form
        '#type' => 'hidden',
        '#value' => $curcomid,
    );
    
    $form['maindescription'] = array( 
        '#type'=> 'item',
        '#title' => t('Please provide the following information about one successful venture your research led to. 
        You will be able to provide the below, detailed information for up to 7 ventures. 
        You will be able to provide a short description for additional ventures, beyond 7.')
    );
    
    $form['cname'] = array( 
        '#type' => 'textfield',
        '#title' => 'Name of the Company',
        '#default_value' => $companyName,
        '#required' => TRUE
    );
    $form['curl'] = array( //name tag
        '#type' => 'textfield',
        '#default_value' => $companyUrl,
        '#title' => 'Company website (URL)'
    );
    
    $form['statustitle1'] = array( 
        '#type'=> 'item',
        '#title' => t('Current Status'),
        '#required' => TRUE
    );
    $form['statustitle2'] = array( 
        '#type'=> 'item',
        '#title' => t('Check all that apply.')
    );
    $form['comstatus'] = array(
        '#type' => 'checkboxes',
        '#options' => drupal_map_assoc($comstatus_op),
        '#default_value' => $companyStatus,
        '#title' => t('')
    );
    
    
    $form['status_other'] = array(
        // The 'container-inline' class places elements next to each other, while the 'form-item' class provides the correct spacing between options.
        '#prefix' => '<div class="container-inline form-item">',
        '#suffix' => '</div>'
    );
    // By supplying the title here, instead of using the '#field_prefix' property of the textfield, clicking the text will also select the radio button.
    $form['status_other']['status_other_option'] = array(
        '#type' => 'checkbox',
        '#title' => t('Other:'),
        '#default_value' => 0,
        '#return_value' => 1,
        '#parents' => array('status_other')
    );
    $form['status_other']['status_other_textfield'] = array(
        '#type' => 'textfield',
        '#default_value' => $companyStatusOther,
        '#size' => 20,         
    );
    
    
    $sizecom_op = array(1 => t('No employees'), 
    2 => t('1-5 employees'),
    3 => t('6-15 employees'),
    4 => t('16-30 employees'),
    5 => t('31-75 employees'), 
    6 => t('76-200 employees'), 
    7 => t('201-1000 employees'), 
    8 => t('1000+ employees') 
    );

    $form['sizeOfCompany'] = array(
        '#type' => 'radios',
        '#title' => t('Size of Company'),
        '#default_value' => $companySize,
        '#options' => $sizecom_op,
        '#required' => TRUE
    );
    
    $form['invessum'] = array( 
        '#type' => 'textarea',
        '#default_value' => $investmentSummary,
        '#title' => 'Investment Summary (if available)<br>Paste the investment summary below.'
    );
    
    $form['roletitle1'] = array( 
        '#type'=> 'item',
        '#title' => t('Have you taken a role in the company?'),
        '#required' => TRUE
    );
    $form['roletitle2'] = array( 
        '#type'=> 'item',
        '#title' => t('Check all that apply(current or past).')
    );
    
    $form['comrole'] = array(
        '#type' => 'checkboxes',
        '#options' => drupal_map_assoc($comrole_op),
        '#default_value' => $companyRole,
        '#title' => t('')
    );
    
    $form['role_other'] = array(
        // The 'container-inline' class places elements next to each other, while the 'form-item' class provides the correct spacing between options.
        '#prefix' => '<div class="container-inline form-item">',
        '#suffix' => '</div>'
    );
    // By supplying the title here, instead of using the '#field_prefix' property of the textfield, clicking the text will also select the radio button.
    $form['role_other']['role_other_option'] = array(
        '#type' => 'checkbox',
        '#title' => t('Other:'),
        '#default_value' => 0,
        '#return_value' => 1,
        '#parents' => array('role_other')
    );
    $form['role_other']['role_other_textfield'] = array(
        '#type' => 'textfield',
        '#default_value' => $companyRoleOther,
        '#size' => 20,         
    );
    
   $form['back'] = array(
      '#type' => 'submit',
      '#value' => t('Back'),
      '#name' => 'back',
      '#submit' => array('go_back'),
      '#limit_validation_errors' => array(
        array('hiddenuserid'),
        array('hiddencomid')),
    );
    
    $form['addCompany'] = array(
        '#type' => 'submit',
        '#value' => t('Add another company'),
        '#name' => 'add'
    );
    $form['continuebutton'] = array(
        '#type' => 'submit',
        '#value' => t('Continue'),
        '#name' => 'continue'
    );
   
    return $form;
}

function go_back($form, &$form_state){
    $curuserid=$form_state['values']['hiddenuserid'];    
    $urloptions = array('query' => array('userid' => $curuserid));
    $curcomid=$form_state['values']['hiddencomid'];
    $comidtosend=$curcomid-1;
    $urloptionscom = array('query' => array('userid' => $curuserid,'comid' =>$comidtosend));
    if($curcomid==1){
        drupal_goto('ffresform/research_form_page16',$urloptions);
    }
    else{
        drupal_goto('ffresform/research_form_page17',$urloptionscom);
    }
}

//custom validate function for page 17
function form_my_research_form_page17_validate($form, &$form_state) {
  //check status checkboxes
  $comstatus_ops=$form_state['values']['comstatus'];  //checkboxes options return
  $comstatus_tf=$form_state['values']['status_other_textfield'];
  $comstatus_tf=trim($comstatus_tf,' '); //before compare repalce all blankspace
  $comstatus_tf=trim($comstatus_tf);
  $comstatus_tf=trim($comstatus_tf,"\x00..\x1F");
  
  $comstatus_ops=array_diff($comstatus_ops, array(0)); //delete all the return zero values
  if(count($comstatus_ops)==0){ //if user didn't choose any checkboxes
    if($comstatus_tf ==null){//check other textfield's value
            form_set_error('status_other_textfield', "If you don't choose any company status options, please input other!");
    }
  }
  
  //do the same check for company role
  $comrole_ops=$form_state['values']['comrole'];  //checkboxes options return
  $comrole_tf=$form_state['values']['role_other_textfield'];
  $comrole_tf=trim($comrole_tf,' '); //before compare repalce all blankspace
  $comrole_tf=trim($comrole_tf);
  $comrole_tf=trim($comrole_tf,"\x00..\x1F");
  
  $comrole_ops=array_diff($comrole_ops, array(0)); //delete all the return zero values
  if(count($comrole_ops)==0){ //if user didn't choose any checkboxes
    if($comrole_tf ==null){//check other textfield's value
            form_set_error('role_other_textfield', "If you don't choose any company role options, please input other!");
    }
  } 
}

function form_my_research_form_page17_submit($form, &$form_state){
    //add the submit function here, the function related with database
    
    $curuserid=$form_state['values']['hiddenuserid']; 
    $curcomid=$form_state['values']['hiddencomid'];
    
    $urloptions = array('query' => array('userid' => $curuserid)); //pass current userid to next page
    $comidtosend=$curcomid+1;
    $urloptionscom = array('query' => array('userid' => $curuserid,'comid' =>$comidtosend)); //pass com id to the rebuild company page
    
    $button_clicked=$form_state['triggering_element']['#name'];
    //get current input company information first
    $comname=$form_state['values']['cname'];
    $comurl=$form_state['values']['curl'];
    //trim all blankspace
    $comname=trim($comname," ");
    $comname=trim($comname);   
    $comname=trim($comname,"\x00..\x1F");
    
    $comurl=trim($comurl," ");
    $comurl=trim($comurl);    
    $comurl=trim($comurl,"\x00..\x1F");
    
    //get company size key 
    $comsize=$form_state['values']['sizeOfCompany'];
    $cominvsum=$form_state['values']['invessum'];
    $cominvsum=trim($cominvsum," ");
    $cominvsum=trim($cominvsum);    
    $cominvsum=trim($cominvsum,"\x00..\x1F");
    
    $comstage_op=$form_state['values']['comstatus']; //status checkboxes option 
    $comstage_othertf=$form_state['values']['status_other_textfield'];  //status other user input
    $comstage_othertf=trim($comstage_othertf," ");
    $comstage_othertf=trim($comstage_othertf);    
    $comstage_othertf=trim($comstage_othertf,"\x00..\x1F");
    
    $comrole_op_submit=$form_state['values']['comrole']; //role checkboxes option 
    $comrole_othertf=$form_state['values']['role_other_textfield'];  //role other user input
    
    $comrole_othertf=trim($comrole_othertf," ");
    $comrole_othertf=trim($comrole_othertf);   
    $comrole_othertf=trim($comrole_othertf,"\x00..\x1F");
    
    $countUI=0;  //default value od the possible null field number
    if($comurl!=null){
        $countUI=$countUI+1;
    }
    if($cominvsum!=null){
        $countUI=$countUI+2;
    }
    
    $usersNumberOfCompanies=db_query("select count(*) from {ff_researchers_companies} where rid=:rid",array(':rid' => $curuserid))->fetchField();
    $cid_result=0;

    //if this is a new company, add it
    //else update the company
    if($usersNumberOfCompanies < $curcomid){

        $cid_result=db_query("select max(id) from {ff_companies}")->fetchField();  //to keep same with the auto increment comid
        $cid_result = $cid_result + 1;
    }
    else{
        $result=db_query("select * from {ff_researchers_companies} where rid=:rid",array(':rid' => $curuserid));
        if ($result) {
            $counter = 1;
            while ($row = $result->fetchAssoc()) {
                if($curcomid == $counter){
                    $cid_result = $row['cid'];
                }
                $counter = $counter + 1;
            }
        }
    }

    //submit all information and update company informtaion
    //create company information switch possible null fields
    switch($countUI){ //base on three possible null field to insert 
        case 0: //all two possible null field are null
            $dbinsertcom_resultname = db_merge('ff_companies') 
            ->key(array('id' => $cid_result))
            ->fields(array(
            'id' => $cid_result,
            'name' => $comname,
            'comp_size' => $comsize,
            ))
            ->execute();
            break;
        case 1: //url is not null
            $dbinsertcom_resultname = db_merge('ff_companies') 
            ->key(array('id' => $cid_result)) 
            ->fields(array(
            'id' => $cid_result,
            'name' => $comname,
            'url' => $comurl,
            'comp_size' => $comsize,
            ))
            ->execute();
            break;
        case 2: //investment is not null
            $dbinsertcom_resultname = db_merge('ff_companies') 
            ->key(array('id' => $cid_result)) 
            ->fields(array(
            'id' => $cid_result,
            'name' => $comname,
            'comp_size' => $comsize,
            'inv_summary' => $cominvsum
            ))
            ->execute();
            break;
        case 3: //both are not null
            $dbinsertcom_resultname = db_merge('ff_companies') 
            ->key(array('id' => $cid_result)) 
            ->fields(array(
            'id' => $cid_result,
            'name' => $comname,
            'url' => $comurl,
            'comp_size' => $comsize,
            'inv_summary' => $cominvsum
            ))
            ->execute();
            break;
    }            

    //company status insert part
    //insert other textfiled first
    $db_statusexisted=db_query("select count(*) from {ff_companies} where id=:cid",array(':cid'=>$cid_result))->fetchField();

    if($db_statusexisted!=0){//if there is records in company role table, then delete before insert new one
        $dbkey_delete = db_query("delete from {ff_companies_status} where id=:cid",array(':cid'=>$cid_result));
    }

    if($comstage_othertf!= null){ //if user type something in other textfiled then store it even if user didn't choose other option
        $dbcomstatot_result=db_merge('ff_companies_status') //update the company status table
        ->key(array('id' => $cid_result,'stage'=>$comstage_othertf))
        ->fields(array(
        'id' =>$cid_result,
        'stage' => $comstage_othertf,
        ))
        ->execute();
    }
    //insert checkboxes options to update the company status table
    $comstage_op=array_diff($comstage_op, array(0)); //delete all the zero values
    foreach($comstage_op as $returncbid){
        //start insert each choice
        $dbcomstatcb_resultname = db_merge('ff_companies_status') 
        ->key(array('id' => $cid_result,'stage'=>$returncbid))
        ->fields(array(
        'id' => $cid_result,
        'stage' => $returncbid,
        ))
        ->execute();
    }
    //before update, delete exited rows related with this user
    $db_ridexisted=db_query("select count(*) from {ff_researchers_companies} where rid=:rid 
    and cid=:cid",array(':rid' => $curuserid,':cid'=>$cid_result))->fetchField();

    if($db_ridexisted!=0){//if there is records in company relation table, then delete before insert new one
        $dbkey_delete = db_query("delete from {ff_researchers_companies} where rid=:rid and cid=:cid",array(':rid' => $curuserid,':cid'=>$cid_result));
    }
            
    //update researchers company table
    $dbrescom_result = db_merge('ff_researchers_companies')  //insert researchers and company into table
    ->key(array('rid' => $curuserid,'cid'=>$cid_result))
    ->fields(array(
    'rid' => $curuserid,
    'cid' => $cid_result,
    ))
    ->execute();
    //before insert role relation,delete the existed rows related with this user
    $db_roleexisted=db_query("select count(*) from {ff_researchers_companies_roles} where rid=:rid and cid=:cid",array(':rid' => $curuserid,':cid'=>$cid_result))->fetchField();

    if($db_roleexisted!=0){//if there is records in company role table, then delete before insert new one
        $dbkey_delete = db_query("delete from {ff_researchers_companies_roles} where rid=:rid and cid=:cid",array(':rid' => $curuserid,':cid'=>$cid_result));
    }
            
    //update researchers company role table
    //insert role other textfiled first
    if($comrole_othertf != null){ //if user type something in other role textfiled then store it even user didn't choose other option
        $dbcomroleot_result=db_merge('ff_researchers_companies_roles') //update the company status table
        ->key(array('rid' => $curuserid,'cid'=>$cid_result,'c_role' =>$comrole_othertf))
        ->fields(array(
        'rid' => $curuserid,
        'cid' =>$cid_result,
        'c_role' => $comrole_othertf
        ))
        ->execute();
    }
    //insert checkboxes options to update the company role table
    $comrole_op_submit=array_diff($comrole_op_submit, array(0)); //delete all the zero values
    foreach($comrole_op_submit as $returncbid){
        //start insert each choice
        $dbcomrolecb_resultname = db_merge('ff_researchers_companies_roles') 
        ->key(array('rid' => $curuserid,'cid'=>$cid_result,'c_role' =>$returncbid))
        ->fields(array(
        'rid' => $curuserid,
        'cid' =>$cid_result,
        'c_role' => $returncbid
        ))
        ->execute();
    }

    //base on clicked button to connect db and go to related page
    switch($button_clicked){ 
        case 'add':                        
            drupal_goto('ffresform/research_form_page17',$urloptionscom); //rebuild company page,use url to pass company number
            break;
        case 'continue':  
            drupal_goto('ffresform/research_form_page18',$urloptions); //goto the next page
            break;
        default: //if needed, add later
            break;
    }
    
}