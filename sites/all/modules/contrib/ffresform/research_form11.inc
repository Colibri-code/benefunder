<?php
//page 11 form and submit 
function form_my_research_form_page11($form, &$form_state) {
    
    $curuserid=$_GET['userid']; //get current user id which passed from the previous url
    
    
    $form['hiddenuserid']=array(  //initialize a form hidden to store the userid to retrieve in submit
        '#type' => 'hidden',
        '#value' => $curuserid,
    );
    $form['maintitle'] = array(
        '#type' => 'item',
        '#title' => t('Which of the below subcategories best describe your research?
        <br>
        To help donors further understand the depth of your research, please select 1-4 
        subcategories. Only select a subcategory if it constitutes at least 10% of your research program.'),
        '#required' => TRUE
    );
   
    //extract research subcategories from db using js 
    //when js extract the subcategories then update the checkboxs options 
    
    //build the checkboxes for the subcategory
    $p11_cbop=array(18 => t('Aerospace / Space'),
    19 => t('Chemistry'),
    20 => t('Computer Science'),
    21 => t('Cybersecurity'),
    22 => t('Electronics / Sensors'),
    23 => t('Fluidics'),
    24 => t('Imaging'),
    25 => t('Information Science / Internet'),
    26 => t('Mathematics'),
    27 => t('Materials Science'),
    28 => t('Nanotechnology / MEMS'),
    29 => t('Photonics'),
    30 => t('Physics'),
    31 => t('Robotics'),
    32 => t('Semiconductors'),
    33 => t('Telecommunications')
    );
    
    $form['p11cbchoice'] = array(
        '#type' => 'checkboxes',
        '#options' => drupal_map_assoc($p11_cbop),
        '#title' => t('Subcategory options'),
        '#required' => TRUE
    );
    
    $form['back']['#markup'] = "<input type='button' class='form-submit' value='Back' onclick='window.history.go(-1)'/>";
    
    $form['continuebutton'] = array( //final submit button
        '#type' => 'submit',
        '#value' => t('Continue')
        
    );
    
    return $form;
}

function form_my_research_form_page11_validate($form, &$form_state) {
 
    $cb_subid=array_filter($form_state['values']['p11cbchoice']);
    
    if (sizeof($cb_subid) > 4) {
        form_set_error('Subcategory', 'Please provide at most 4 choices');
    }
}

function form_my_research_form_page11_submit($form, &$form_state){
    //add the submit function here, the function related with database
    
    $curuserid=$form_state['values']['hiddenuserid'];    
    $urloptions = array('query' => array('userid' => $curuserid)); //pass current userid to next page
    
    //insert researchers's subcategory choices into researchers_subcategory table
    //get the subcategory checkboxes' return value
    $cb_subid=array_filter($form_state['values']['p11cbchoice']);
    //drupal_set_message('<pre>'. print_r($cb_subid, TRUE) .'</pre>');
    //get the original option array to find the corresponding key value to store into db researchers_subcategory table
    $cbop_submit=array(18 => t('Aerospace / Space'),
    19 => t('Chemistry'),
    20 => t('Computer Science'),
    21 => t('Cybersecurity'),
    22 => t('Electronics / Sensors'),
    23 => t('Fluidics'),
    24 => t('Imaging'),
    25 => t('Information Science / Internet'),
    26 => t('Mathematics'),
    27 => t('Materials Science'),
    28 => t('Nanotechnology / MEMS'),
    29 => t('Photonics'),
    30 => t('Physics'),
    31 => t('Robotics'),
    32 => t('Semiconductors'),
    33 => t('Telecommunications')
    );
    
    //before insert or update the subcategory, delete all the existed records related with this user
    $db_secondcid=db_query("select secondary_cid from {ff_researchers} where id=:rid",array(':rid' => $curuserid))->fetchField();
    $curfromid=2; //from secondary cid
    $db_ridexisted=db_query("select count(*) from {ff_researchers_subcategories} where rid=:rid and fromid=:fromid",array(':rid' => $curuserid,':fromid'=>$curfromid))->fetchField();
        
    if($db_ridexisted!=0){//if there is records in info session table, then delete before insert new one
        
        
        $dbsubcres_delete = db_query("delete from {ff_researchers_subcategories} where rid=:rid 
        and fromid=:fromid and sid in (select id from ff_subcategories where cid=:cid)",
        array(':rid' => $curuserid,':fromid'=>$curfromid,':cid' => $db_secondcid));
        

        if($dbsubcres_delete){ //if delete successfully, then insert new records
            foreach($cb_subid as $returncbid){
                $cur_key=array_search($returncbid,$cbop_submit);
                //start insert each choice
                $dbsubid_resultname = db_merge('ff_researchers_subcategories') 
                ->key(array('rid' => $curuserid,'sid'=>$cur_key,'fromid' => $curfromid))
                ->fields(array(
                'rid' => $curuserid,
                'sid' => $cur_key,
                'fromid' => $curfromid
                ))
                ->execute();
            }
    
        }else{
            drupal_set_message("Database delete fail!");
        }
        
    }else{//if there is no records then just insert new one
        foreach($cb_subid as $returncbid){
            $cur_key=array_search($returncbid,$cbop_submit);
            //start insert each choice
            $dbsubid_resultname = db_merge('ff_researchers_subcategories') 
            ->key(array('rid' => $curuserid,'sid'=>$cur_key,'fromid' => $curfromid))
            ->fields(array(
            'rid' => $curuserid,
            'sid' => $cur_key,
            'fromid' => $curfromid
            ))
            ->execute();
        }
    
    }
      
    drupal_goto('ffresform/research_form_page12',$urloptions);  
}