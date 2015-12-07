<?php
//main form page1 and its submit
function form_my_research_form_page1($form, &$form_state) {   
    $fname = "";
    $lname = "";
    $institution = "";
    $school = "";
    $department = "";
    $email = "";
    $phonenumber = "";
    $standing = 0;
    $sessionsChoice = array();
    $positions = 0;
    $positionOther = '';
    $positionQualifier = 0;
    $positionQuaOther = '';
    // positions=

    $curuserid=$_GET['userid']; //get the current url to find if there is a userid exited
    //print($curuserid); 
    $result=db_query("select * from {ff_researchers} where id=:rid",array(':rid' => $curuserid));
    if ($result) {
      while ($row = $result->fetchAssoc()) {
        $fname = $row['fname'];
        $lname = $row['lname'];
        $institution = $row['institution'];
        $school = $row['school'];
        $department = $row['dept'];
        $email = $row['email'];
        $phonenumber = $row['cell'];
        $positions = $row['pos'];
        $positionQualifier = $row['posqual'];
        $standing = $row['standing'];
      }
    }

    $positionQualArray = array(1 => t('Adjunct'),
    2 => t('Clinical'),
    3 => t('In Residence')
    );

    $positionArray = array(1 => t('Assistant Professor'),
    2 => t('Associate Professor'),
    3 => t('Professor'),
    4 => t('Research Scientist')
    );

    if($positions != ''){
        $positionsArraySearch = (array_keys($positionArray, $positions));
        
        //if value does not exist in radio options, it should be the other option
        if(sizeof($positionsArraySearch)==0){
            $positionOther = $positions;
            $positions = 5;
        }
        else{
            $positions = $positionsArraySearch[0];
        }
    }
    else{
        $positions = 0;
    }

    if($positionQualifier != ''){
        $positionQualifierArraySearch = (array_keys($positionQualArray, $positionQualifier));
        
        //if value does not exist in radio options, it should be the other option
        if(sizeof($positionQualifierArraySearch)==0){
            $positionQuaOther = $positionQualifier;
            $positionQualifier = 4;
        }
        else{
            $positionQualifier = $positionQualifierArraySearch[0];
        }
    }
    else{
        $positionQualifier = 0;
    }

    

    $result=db_query("select * from {ff_researchers_info_sessions} where rid=:rid",array(':rid' => $curuserid));
    if ($result) {
      while ($row = $result->fetchAssoc()) {
        array_push($sessionsChoice, $row['sid']);
      }
    }


    $form['hiddenuserid']=array(  //initialize a form hidden to store the userid to retrieve in submit
        '#type' => 'hidden',
        '#value' => $curuserid
    );

    $form['subdescription'] = array( //sub description about page1
        '#type'=> 'item',
        '#title' => t('General information')
    );
    
    $form['fname'] = array( //name tag
        '#type' => 'textfield',
        '#title' => 'First name',
        '#default_value' => $fname,
        '#required' => TRUE
    );
    $form['lname'] = array( //name tag
        '#type' => 'textfield',
        '#title' => 'Last name',
        '#default_value' => $lname,
        '#required' => TRUE
    );
    
    $form['institution'] = array( 
        '#type' => 'textfield',
        '#title' => 'Institution',
        '#default_value' => $institution,
        '#required' => TRUE
    );
    
    $form['school'] = array(  //keywords tag
        '#type' => 'textfield',
        '#default_value' => $school,
        '#title' => 'School'
    );
    $form['department'] = array(  
        '#type' => 'textfield',
        '#default_value' => $department,
        '#title' => 'Department'
    );
    
    //start define the radios for researchers position
    $form['positions'] = array(
        '#type' => 'item',
        '#title' => t('Position'),
        '#required' => TRUE,
    );
    $form['positions']['assispro'] = array(
        '#type' => 'radio',
        '#title' => t('Assistant Professor'),
        '#default_value' => $positions,                    // If there is a default value, this should also be specified for each radio button.
        '#return_value' => 1,
        '#parents' => array('positions'),           // You must specify this for each radio button for them to act as a group.
        '#prefix' => '<div class="form-radios">'  // The first radio button needs to make the style match a normal radios group.
    );
    $form['positions']['assopro'] = array(
        '#type' => 'radio',
        '#title' => t('Associate Professor'),
        '#default_value' => $positions,
        '#return_value' => 2,
        '#parents' => array('positions')
    );
    $form['positions']['pro'] = array(
        '#type' => 'radio',
        '#title' => t('Professor'),
        '#default_value' => $positions,
        '#return_value' => 3,
        '#parents' => array('positions')
    );
    $form['positions']['ressci'] = array(
        '#type' => 'radio',
        '#title' => t('Research Scientist'),
        '#default_value' => $positions,
        '#return_value' => 4,
        '#parents' => array('positions')
    );
    $form['positions']['pos_other'] = array(
        // The 'container-inline' class places elements next to each other, while the 'form-item' class provides the correct spacing between options.
        '#prefix' => '<div class="container-inline form-item">',
        '#suffix' => '</div>'
    );
    // By supplying the title here, instead of using the '#field_prefix' property of the textfield, clicking the text will also select the radio button.
    $form['positions']['pos_other']['pos_other_option'] = array(
        '#type' => 'radio',
        '#title' => t('Other:'),
        '#default_value' => $positions,
        '#return_value' => 5,
        '#parents' => array('positions')
    );
    $form['positions']['pos_other']['pos_other_textfield'] = array(
        '#type' => 'textfield',
        '#default_value' => $positionOther,
        '#size' => 20,         // The default size is a bit large...
        '#suffix' => '</div>'  // End of the "form-radios" style.
        //'#attributes' => array('onClick' => 'jQuery("input[name=positions][value=5]").attr("checked", true)',),
        
    );
    
    //start the position qualifier radios
    $form['positionqua'] = array(
        '#type' => 'item',
        '#title' => t('Position qualifier (if applicable):')
    );
    $form['positionqua']['adj'] = array(
        '#type' => 'radio',
        '#title' => t('Adjunct'),
        '#default_value' => $positionQualifier,
        '#return_value' => 1,
        '#parents' => array('positionqua'),           // You must specify this for each radio button for them to act as a group.
        '#prefix' => '<div class="form-radios">'  // The first radio button needs to make the style match a normal radios group.
    );
    $form['positionqua']['cli'] = array(
        '#type' => 'radio',
        '#title' => t('Clinical'),
        '#default_value' => $positionQualifier,
        '#return_value' => 2,
        '#parents' => array('positionqua')
    );
    $form['positionqua']['inr'] = array(
        '#type' => 'radio',
        '#title' => t('In Residence'),
        '#default_value' => $positionQualifier,
        '#return_value' => 3,
        '#parents' => array('positionqua')
    );
    $form['positionqua']['positionqua_other'] = array(
        // The 'container-inline' class places elements next to each other, while the 'form-item' class provides the correct spacing between options.
        '#prefix' => '<div class="container-inline form-item">',
        '#suffix' => '</div>'
    );
    // By supplying the title here, instead of using the '#field_prefix' property of the textfield, clicking the text will also select the radio button.
    $form['positionqua']['positionqua_other']['positionqua_other_option'] = array(
        '#type' => 'radio',
        '#title' => t('Other:'),
        '#default_value' => $positionQualifier,
        '#return_value' => 4,
        '#parents' => array('positionqua')
    );
    $form['positionqua']['positionqua_other']['positionqua_other_textfield'] = array(
        '#type' => 'textfield',
        '#default_value' =>  $positionQuaOther,
        '#size' => 20,         // The default size is a bit large...
        '#attributes' => array('onClick' => '$("input[name=positionqua][value=4]").attr("checked", true);'),
        '#suffix' => '</div>'  // End of the "form-radios" style.
    );
    
    $form['email'] = array( //research description tag
        '#type' => 'textfield',
        '#title' => 'Email',
        '#default_value' => $email,
        '#required' => TRUE
    );
    $form['phonenumber'] = array( //research description tag
        '#type' => 'textfield',
        '#title' => 'Phone number (Example: xxx-xxx-xxxx)',
        '#default_value' => $phonenumber,
        '#required' => TRUE
    );

   
    //start the checkbox of session part 
    $sessions_cbop=array(1 => t('I attended a Benefunder seminar (in person)'),
    2 => t('I participated in a Benefunder conference call'),
    3 => t('I listened to a Benefunder orientation podcast'),
    4 => t('A delegate from my lab (student, post doc, tech, assistant) attend one of the above'),
    5 => t('None of the above')
    );
    
    $form['sessionschoice'] = array(
        '#type' => 'checkboxes',
        '#options' => $sessions_cbop,
        '#title' => t('You are required to attend a Benefunder information session. Which type of session did you attend?'),
        '#default_value' => $sessionsChoice,
        '#required' => TRUE
    );
    
    $form['standingdes'] = array(
        '#type' => 'item',
        '#title' => t('To be eligible for Benefunder, please verify that you are in good standing with your University or Research Institute.'),
        '#required' => TRUE
    );
    $form['standing'] = array(
        '#type' => 'checkbox',
        '#title' => t('I certify that I am in a good standing with my University or Research Institute'),
        '#default_value' => $standing,
        '#required' => TRUE
    );
    
    //submit button part
    $form['continuenextpage'] = array(  //next page button
        '#type' => 'submit',
        '#value' => t('Continue'),
        '#name' => 'continue'
    );
    $form_state['values']['positions'] = 2;

    return $form;
    
}

function isCell($text) {//match the cell with the regrex to validata

    return preg_match('/^[0-9]{3}-[0-9]{3}-[0-9]{4}$/', str_replace(' ', '', $text));
}
function isEmail($text) {//match the email with the regrex to validata

    return preg_match('/^[A-Za-z0-9_\-.]{1,}\@[A-Za-z]{1,}\.[A-Za-z]{2,}$/', str_replace(' ', '', $text));
}




//custom validate function for page 1
function form_my_research_form_page1_validate($form, &$form_state) {
  

  $cell=$form_state['values']['phonenumber'];
  $email=$form_state['values']['email'];
  $pos_op=$form_state['values']['positions']; 
  $pos_tf=$form_state['values']['pos_other_textfield'];
  $pos_tf=trim($pos_tf);
  $pos_tf=trim($pos_tf,' '); //before compare repalce all blankspace
  $pos_tf=trim($pos_tf,"\x00..\x1F");  
  
  if (!isEmail($email)) { //check email format
    
    form_set_error('email', 'Not a valid email address! Please use format like xx@xx.xx');
  }
  
  
  if (!isCell($cell)) { //check phone number format
    
    form_set_error('phonenumber', 'Not a valid phone number! Please use format like xxx-xxx-xxxx');
  }
  //check pos other field
  if($pos_op==0){ //if user didn't choose any radios
    if($pos_tf ==""){//check other textfield's value
        form_set_error('pos_other_textfield', "If you don't choose position options, please input other positions!");
    }
  }
  
}



function form_my_research_form_page1_submit($form, &$form_state){
     
    //get user options
    //get the position radios value
    $selected_position=''; //store the user's position choice
    $select_position_id=$form_state['values']['positions'];
    
    switch ($select_position_id) {//need update to dynamic select title value
    
        case 1:
            $select_position=$form['positions']['assispro']['#title'];
            break;
        case 2:
            $select_position=$form['positions']['assopro']['#title']; 
            break;
        case 3:
            $select_position=$form['positions']['pro']['#title'];
            break;
        case 4:
            $select_position=$form['positions']['ressci']['#title'];
            break;
        case 5:
            $select_position=$form_state['values']['pos_other_textfield'];
            break;
        //if user don't choose option just input other textfield
        case 0: 
            $select_position=$form_state['values']['pos_other_textfield'];
            $select_position=trim($select_position,' '); //before compare repalce all blankspace
            $select_position=trim($select_position);
            $select_position=trim($select_position,"\x00..\x1F");
            break;
    }
    //same operation for positionqualifier
    $selected_positionqua=''; //store the user's position choice
    $select_positionqua_id=$form_state['values']['positionqua'];
    
    switch ($select_positionqua_id) {//need update to dynamic select title value
    case 1:
        $selected_positionqua=$form['positionqua']['adj']['#title'];
        break;
    case 2:
        $selected_positionqua=$form['positionqua']['cli']['#title']; 
        break;
    case 3:
        $selected_positionqua=$form['positionqua']['inr']['#title'];
        break;
    case 4:
        $selected_positionqua=$form_state['values']['positionqua_other_textfield'];
        break;
    //if user don't choose option just input other textfield
    case 0: 
        $selected_positionqua=$form_state['values']['positionqua_other_textfield'];
        $selected_positionqua=trim($selected_positionqua,' '); //before compare repalce all blankspace
        $selected_positionqua=trim($selected_positionqua);
        $selected_positionqua=trim($selected_positionqua,"\x00..\x1F");
        break;  
    }

    //get user input prepare to insert into db
    $fname=$form_state['values']['fname'];
    $lname=$form_state['values']['lname'];
    $institution=$form_state['values']['institution'];
    $school=$form_state['values']['school'];
    $department=$form_state['values']['department'];
    $email=$form_state['values']['email'];
    $cell=$form_state['values']['phonenumber'];
    
    //before insert repalce all blankspace
    $fname=trim($fname,' '); 
    $fname=trim($fname);
    $fname=trim($fname,"\x00..\x1F");
    
    $lname=trim($lname,' '); 
    $lname=trim($lname);
    $lname=trim($lname,"\x00..\x1F");
    
    $institution=trim($institution,' '); 
    $institution=trim($institution);
    $institution=trim($institution,"\x00..\x1F");
    
    $school=trim($school,' '); 
    $school=trim($school);
    $school=trim($school,"\x00..\x1F");
    
    $department=trim($department,' '); 
    $department=trim($department);
    $department=trim($department,"\x00..\x1F");
    
    $email=trim($email,' '); 
    $email=trim($email);
    $email=trim($email,"\x00..\x1F");
    
    $cell=trim($cell,' '); 
    $cell=trim($cell);
    $cell=trim($cell,"\x00..\x1F");
    
    $countSDP=0;  //default value od the possible null field number
    if($school!=null){
        $countSDP=$countSDP+1;
    }
    if($department!=null){
        $countSDP=$countSDP+2;
    }
    if($selected_positionqua!=null){
        $countSDP=$countSDP+4; 
    }
    
    
    $rid_current=$form_state['values']['hiddenuserid'];  //get the current id hidden in the form field
    $curexited=db_query("select count(*) from {ff_researchers} where id=:rid",array(':rid' => $rid_current))->fetchField();
    
    //if the user id alredy existed, then update the table,else insert new
    if($curexited==0){//no previous so insert
            if($rid_current!=0){
            $rid_db=$rid_current; //use the current userid to db operation,then update db
            //check all null possible field to avoid to insert blank into db
            switch($countSDP){ //base on three possible null field to insert 
                case 0: //all three possible null field are null
                    $dbres_resultname = db_merge('ff_researchers')
                    ->key(array('id' => $rid_db))
                    ->fields(array(
                    'id' => $rid_db,
                    'fname' => $fname,
                    'lname' => $lname,
                    'institution' => $institution,
                    'pos' => $select_position, //need get the radio value of user choice
                    'email' => $email,
                    'cell' => $cell,
                    'standing' => 1,
                    'primary_cid' => 1    //insert the default value first, then update the corresponding value on page2
                    ))
                    ->execute();
                    break;
                case 1: //school is not null
                    $dbres_resultname = db_merge('ff_researchers')
                    ->key(array('id' => $rid_db))
                    ->fields(array(
                    'id' => $rid_db,
                    'fname' => $fname,
                    'lname' => $lname,
                    'institution' => $institution,
                    'school' => $school,
                    'pos' => $select_position, //need get the radio value of user choice
                    'email' => $email,
                    'cell' => $cell,
                    'standing' => 1,
                    'primary_cid' => 1    //insert the default value first, then update the corresponding value on page2
                    ))
                    ->execute();
                    break;
                case 2: //department is not null
                    $dbres_resultname = db_merge('ff_researchers')
                    ->key(array('id' => $rid_db))
                    ->fields(array(
                    'id' => $rid_db,
                    'fname' => $fname,
                    'lname' => $lname,
                    'institution' => $institution,
                    'dept' => $department,
                    'pos' => $select_position, //need get the radio value of user choice
                    'email' => $email,
                    'cell' => $cell,
                    'standing' => 1,
                    'primary_cid' => 1     //insert the default value first, then update the corresponding value on page2
                    ))
                    ->execute();
                    break;
                case 4: //posqual is not null
                    $dbres_resultname = db_merge('ff_researchers')
                    ->key(array('id' => $rid_db))
                    ->fields(array(
                    'id' => $rid_db,
                    'fname' => $fname,
                    'lname' => $lname,
                    'institution' => $institution,
                    'pos' => $select_position, //need get the radio value of user choice
                    'email' => $email,
                    'cell' => $cell,
                    'standing' => 1,
                    'primary_cid' => 1     //insert the default value first, then update the corresponding value on page2
                    ))
                    ->execute();
                    break;
                case 3://school and department are not null
                    $dbres_resultname = db_merge('ff_researchers')
                    ->key(array('id' => $rid_db))
                    ->fields(array(
                    'id' => $rid_db,
                    'fname' => $fname,
                    'lname' => $lname,
                    'institution' => $institution,
                    'school' => $school,
                    'dept' => $department,
                    'pos' => $select_position, //need get the radio value of user choice
                    'email' => $email,
                    'cell' => $cell,
                    'standing' => 1,
                    'primary_cid' => 1     //insert the default value first, then update the corresponding value on page2
                    ))
                    ->execute();
                    break;
                case 5: //school and posqual are not null
                    $dbres_resultname = db_merge('ff_researchers')
                    ->key(array('id' => $rid_db))
                    ->fields(array(
                    'id' => $rid_db,
                    'fname' => $fname,
                    'lname' => $lname,
                    'institution' => $institution,
                    'school' => $school,
                    'pos' => $select_position, //need get the radio value of user choice
                    'posqual' => $selected_positionqua,
                    'email' => $email,
                    'cell' => $cell,
                    'standing' => 1,
                    'primary_cid' => 1     //insert the default value first, then update the corresponding value on page2
                    ))
                    ->execute();
                    break;
                case 6: //department and posqual are not null
                    $dbres_resultname = db_merge('ff_researchers')
                    ->key(array('id' => $rid_db))
                    ->fields(array(
                    'id' => $rid_db,
                    'fname' => $fname,
                    'lname' => $lname,
                    'institution' => $institution,
                    'dept' => $department,
                    'pos' => $select_position, //need get the radio value of user choice
                    'posqual' => $selected_positionqua,
                    'email' => $email,
                    'cell' => $cell,
                    'standing' => 1,
                    'primary_cid' => 1     //insert the default value first, then update the corresponding value on page2
                    ))
                    ->execute();
                    break;
                case 7:
                    $dbres_resultname = db_merge('ff_researchers')
                    ->key(array('id' => $rid_db))
                    ->fields(array(
                    'id' => $rid_db,
                    'fname' => $fname,
                    'lname' => $lname,
                    'institution' => $institution,
                    'school' => $school,
                    'dept' => $department,
                    'pos' => $select_position, //need get the radio value of user choice
                    'posqual' => $selected_positionqua,
                    'email' => $email,
                    'cell' => $cell,
                    'standing' => 1,
                    'primary_cid' => 1     //insert the default value first, then update the corresponding value on page2
                    ))
                    ->execute();
                    break;
            }
            
        }else{
            drupal_set_message("User ID not right!");
        }
    
    }else{//update current user profile
        switch($countSDP){ //base on three possible null field to update 
                case 0: //all three possible null field are null
                    $res_updated = db_update('ff_researchers') 
                      ->fields(array(
                        'fname' => $fname,
                        'lname' => $lname,
                        'institution' => $institution,
                        'school' => NULL,
                        'dept' => NULL,
                        'pos' => $select_position, 
                        'posqual' => NULL,
                        'email' => $email,
                        'cell' => $cell,
                        'standing' => 1,
                      ))
                      ->condition('id', $rid_current , '=')
                      ->execute();
                    break;
                case 1: //school is not null
                    $res_updated = db_update('ff_researchers') 
                      ->fields(array(
                        'fname' => $fname,
                        'lname' => $lname,
                        'institution' => $institution,
                        'school' => $school,
                        'dept' => NULL,
                        'pos' => $select_position, 
                        'posqual' => NULL,
                        'email' => $email,
                        'cell' => $cell,
                        'standing' => 1,
                      ))
                      ->condition('id', $rid_current , '=')
                      ->execute();
                    break;
                case 2: //department is not null
                    $res_updated = db_update('ff_researchers') 
                      ->fields(array(
                        'fname' => $fname,
                        'lname' => $lname,
                        'institution' => $institution,
                        'school' => NULL,
                        'dept' => $department,
                        'pos' => $select_position, 
                        'posqual' => NULL,
                        'email' => $email,
                        'cell' => $cell,
                        'standing' => 1,
                      ))
                      ->condition('id', $rid_current , '=')
                      ->execute();
                    break;
                case 4: //posqual is not null
                   $res_updated = db_update('ff_researchers') 
                      ->fields(array(
                        'fname' => $fname,
                        'lname' => $lname,
                        'institution' => $institution,
                        'school' => NULL,
                        'dept' => NULL,
                        'pos' => $select_position, 
                        'posqual' => $selected_positionqua,
                        'email' => $email,
                        'cell' => $cell,
                        'standing' => 1,
                      ))
                      ->condition('id', $rid_current , '=')
                      ->execute();
                    break;
                case 3://school and department are not null
                    $res_updated = db_update('ff_researchers') 
                      ->fields(array(
                        'fname' => $fname,
                        'lname' => $lname,
                        'institution' => $institution,
                        'school' => $school,
                        'dept' => $department,
                        'pos' => $select_position, 
                        'posqual' => NULL,
                        'email' => $email,
                        'cell' => $cell,
                        'standing' => 1,
                      ))
                      ->condition('id', $rid_current , '=')
                      ->execute();
                    break;
                case 5: //school and posqual are not null
                    $res_updated = db_update('ff_researchers') 
                      ->fields(array(
                        'fname' => $fname,
                        'lname' => $lname,
                        'institution' => $institution,
                        'school' => $school,
                        'dept' => NULL,
                        'pos' => $select_position, 
                        'posqual' => $selected_positionqua,
                        'email' => $email,
                        'cell' => $cell,
                        'standing' => 1,
                      ))
                      ->condition('id', $rid_current , '=')
                      ->execute();
                    break;
                case 6: //department and posqual are not null
                    $res_updated = db_update('ff_researchers') 
                      ->fields(array(
                        'fname' => $fname,
                        'lname' => $lname,
                        'institution' => $institution,
                        'school' => NULL,
                        'dept' => $department,
                        'pos' => $select_position, 
                        'posqual' => $selected_positionqua,
                        'email' => $email,
                        'cell' => $cell,
                        'standing' => 1,
                      ))
                      ->condition('id', $rid_current , '=')
                      ->execute();
                    break;
                case 7:
                    $res_updated = db_update('ff_researchers') 
                      ->fields(array(
                        'fname' => $fname,
                        'lname' => $lname,
                        'institution' => $institution,
                        'school' => $school,
                        'dept' => $department,
                        'pos' => $select_position, 
                        'posqual' => $selected_positionqua,
                        'email' => $email,
                        'cell' => $cell,
                        'standing' => 1,
                      ))
                      ->condition('id', $rid_current , '=')
                      ->execute();
                    break;
            }
    
    }
    
        
    if(!is_null($rid_current)){  //insert or update info session when db connect successfully
        
        //drupal_set_message("Database Connected!");
        $rid_db=$rid_current; 
        //insert researchers's session choice into researchers_session table
        //get the session checkboxs' return value
        $cb_ids=array_filter($form_state['values']['sessionschoice']);

        //before insert, first delete all the previous records related with current user if there is records related with this user
        $db_ridexisted=db_query("select count(*) from {ff_researchers_info_sessions} where rid=:rid",array(':rid' => $rid_db))->fetchField();
        
        if($db_ridexisted!=0){//if there is records in info session table, then delete before insert new one
            $dbinfores_delete = db_delete('ff_researchers_info_sessions')
            ->condition('rid', $rid_db)
            ->execute();
            if($dbinfores_delete){ //if del
                foreach($cb_ids as $returncbid){
                    //start insert each choice
                    $dbsession_resultname = db_merge('ff_researchers_info_sessions')
                    ->key(array('rid' => $rid_db,'sid' => $returncbid))
                    ->fields(array(
                    'rid' => $rid_db,
                    'sid' => $returncbid,
                    ))
                    ->execute();
                }
        
            }else{
                drupal_set_message("Database delete fail!");
            }
            
        }else{//if there is no records then just insert new one
            foreach($cb_ids as $returncbid){
                //start insert each choice
                $dbsession_resultname = db_merge('ff_researchers_info_sessions')
                ->key(array('rid' => $rid_db,'sid' => $returncbid))
                ->fields(array(
                'rid' => $rid_db,
                'sid' => $returncbid,
                ))
                ->execute();
            }
        
        }        
        
    }else{ //output db fail message
        drupal_set_message("Database Connection fail!");
    }
    
    $urloptions = array('query' => array('userid' => $rid_current)); //pass current userid to next page
    drupal_goto('ffresform/research_form_page2',$urloptions);

}
