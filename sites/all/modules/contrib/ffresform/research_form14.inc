<?php
//page 14 form and submit 
function form_my_research_form_page14($form, &$form_state) {
    
    $curuserid=$_GET['userid']; //get current user id which passed from the previous url
    
    
    $form['hiddenuserid']=array(  //initialize a form hidden to store the userid to retrieve in submit
        '#type' => 'hidden',
        '#value' => $curuserid,
    );
    $form['maindesp'] = array(
        '#type' => 'item',
        '#title' => t('Some of our donors are interested in basic research. Others are interested in applied research.
        <br>
        <br>
        With the below questions, we would like to gain more insight into your research program.
        <br>
        <br>
        From the below statements, check all that apply to your research. Not all statements apply to all research disciplines.')
    );
    
    //build the checkboxes for the research descriptors
    $resdesp1_cbop=array(1 => t('is experimental'),
    2 => t('includes the development of a proof of concept to commercialize my research'),
    3 => t('is theoretical'),
    4 => t('has direct applications to the world around us'),
    5 => t('does not have direct commercial applications but is used in collaborations with colleagues whose research may get commercialized'),
    6 => t('will result in me writing a book'),
    7 => t('helps to understand a real world problem and solve it'),
    8 => t('acquires new knowledge that is not directly applicable to the world around us, but that enhances our understanding of fundamental 
    principles underlying phenomena in the world'),
    9 => t('is conducted in a wet lab'),
    10 => t('will affect national or international policy')
    );
    
    $form['res1cbchoice'] = array(
        '#type' => 'checkboxes',
        '#options' => drupal_map_assoc($resdesp1_cbop),
        '#title' => t('My research')
    );
    
    $despdev_cbop = array(1 => t('theory'), 
    2 => t('drug'),
    3 => t('device (medical)'),
    4 => t('device (non-medical)'),
    5 => t('new educational method'),
    6 => t('software'),
    7 => t('mobile app'),
    8 => t('diagnostic (medical)'),
    9 => t('diagnostic (non-medical)'),
    10 => t('policy')
    );
    
    $form['resdev_cbchoice'] = array(
        '#type' => 'checkboxes',
        '#options' => drupal_map_assoc($despdev_cbop),
        '#title' => t('My research is developing a')
    );
    
    //start define the checkboxes for research descriptors' developing part
    
    $form['resdev_other'] = array(
        // The 'container-inline' class places elements next to each other, while the 'form-item' class provides the correct spacing between options.
        '#prefix' => '<div class="container-inline form-item">',
        '#suffix' => '</div>'
    );
    // By supplying the title here, instead of using the '#field_prefix' property of the textfield, clicking the text will also select the radio button.
    $form['resdev_other']['resdev_other_option'] = array(
        '#type' => 'checkbox',
        '#title' => t('Other:'),
        '#default_value' => 0,
        '#return_value' => 1,
        '#parents' => array('resdev_other')
    );
    $form['resdev_other']['resdev_other_textfield'] = array(
        '#type' => 'textfield',
        '#default_value' => '',
        '#size' => 20,         // The default size is a bit large...
    );
    
    //start define the checkboxes for research descriptors' testing part
    
    $form['restest_cbchoice'] = array(
        '#type' => 'checkboxes',
        '#options' => drupal_map_assoc($despdev_cbop),
        '#title' => t('My research is testing a')
    );
    
    
    $form['restest_other'] = array(
        // The 'container-inline' class places elements next to each other, while the 'form-item' class provides the correct spacing between options.
        '#prefix' => '<div class="container-inline form-item">',
        '#suffix' => '</div>'
    );
    // By supplying the title here, instead of using the '#field_prefix' property of the textfield, clicking the text will also select the radio button.
    $form['restest_other']['restest_other_option'] = array(
        '#type' => 'checkbox',
        '#title' => t('Other:'),
        '#default_value' => 0,
        '#return_value' => 1,
        '#parents' => array('restest_other')
    );
    $form['restest_other']['restest_other_textfield'] = array(
        '#type' => 'textfield',
        '#default_value' => '',
        '#size' => 20,         // The default size is a bit large..
    );
    
    
    $resdesptime_cbop=array(1 => t('within the next year'),
    2 => t('within 2-5 years'),
    3 => t('within 5-10 years'),
    4 => t('in more than 10 years'),
    5 => t('never')
    );
    
    $form['rescomcbchoice'] = array(
        '#type' => 'checkboxes',
        '#options' => drupal_map_assoc($resdesptime_cbop),
        '#title' => t('I expect outcomes of some of my research to get commercialized')
    );
    $form['resaffectcbchoice'] = array(
        '#type' => 'checkboxes',
        '#options' => drupal_map_assoc($resdesptime_cbop),
        '#title' => t('I expect outcomes of some of my research to affect national policy')
    );
    
    //research descriptors radios
    $resdescribe_op = array(41 => t('basic and/or fundamental research'), 
    42 => t('mostly basic and/or fundamental, mixed with some applied work'),
    43 => t('mostly applied and/or translational, mixed with some basic work'),
    44 => t('applied and/or translational'));

    $form['resdescribe'] = array(
        '#type' => 'radios',
        '#title' => t('I would describe my research as'),
        '#options' => drupal_map_assoc($resdescribe_op),
        '#required' => TRUE
    );
    
    $form['mainhelp'] = array(
        '#type' => 'item',
        '#title' => t("Note:
        <br>
        <br>
        Basic research is a systematic study directed toward greater knowledge or understanding of the fundamental aspects of phenomena around us. 
        Basic research is often executed without thought of a practical end goal, without specific applications or products in mind. Basic research 
        is more speculative and takes a long time - often decades - to be applied in any practical context. It often leads to breakthroughs or 
        paradigm-shifts in practice.
        <br>
        <br>
        Applied Research (referred to as Translational in healthcare and biomedical research) is the systematic inquiry, experimental design and
        execution of research to create practical applications and/or make findings from basic science useful for practical applications -- 
        e.g., new art and design, new social policies, products or processes for commercial use, new medicines, diagnostics or clinical 
        practices. It employs, integrates and further develops some of the research communities' accumulated theories, knowledge, methods, and 
        techniques. Applied research can have an impact in practice in a relatively short time.")
    );
    
    
    $form['back']['#markup'] = "<input type='button' class='form-submit' value='Back' onclick='window.history.go(-1)'/>";
    
    $form['continuebutton'] = array( 
        '#type' => 'submit',
        '#value' => t('Continue')
        
    );
    
    return $form;
}

function form_my_research_form_page14_submit($form, &$form_state){
    //add the submit function here, the function related with database
    
    $curuserid=$form_state['values']['hiddenuserid'];    
    $urloptions = array('query' => array('userid' => $curuserid)); //pass current userid to next page
    //before insert, delete the existed records related with this user
    $db_ridexisted=db_query("select count(*) from {ff_researchers_res_descriptors} where rid=:rid",array(':rid' => $curuserid))->fetchField();
    
    if($db_ridexisted!=0){//if there is records in descriptors table, then delete before insert new one
        $dbkey_delete = db_query("delete from {ff_researchers_res_descriptors} where rid=:rid",array(':rid' => $curuserid));
    }
    
    
    
    //get the research descriptors checkboxes value
    //research desp 1
    $resdesp1cb_ids=array_filter($form_state['values']['res1cbchoice']);
    //get the original option array to find the corresponding key value to store into db table
    $resdesp1_cbop_submit=array(1 => t('is experimental'),
    2 => t('includes the development of a proof of concept to commercialize my research'),
    3 => t('is theoretical'),
    4 => t('has direct applications to the world around us'),
    5 => t('does not have direct commercial applications but is used in collaborations with colleagues whose research may get commercialized'),
    6 => t('will result in me writing a book'),
    7 => t('helps to understand a real world problem and solve it'),
    8 => t('acquires new knowledge that is not directly applicable to the world around us, but that enhances our understanding of fundamental 
    principles underlying phenomena in the world'),
    9 => t('is conducted in a wet lab'),
    10 => t('will affect national or international policy')
    );
    
    foreach($resdesp1cb_ids as $returncbid){
        $cur_key=array_search($returncbid,$resdesp1_cbop_submit);
        //start insert each choice
        $dbresdesp1_resultname = db_merge('ff_researchers_res_descriptors') 
        ->key(array('rid' => $curuserid,'did'=>$cur_key))
        ->fields(array(
        'rid' => $curuserid,
        'did' => $cur_key,
        ))
        ->execute();
    }
    
    
    //resdesp developing
    //get the original option array to find the corresponding key value to store into db researchers_res_descriptors table
    $resdexp_cbop_submit=array(1 => t('theory'), 
    2 => t('drug'),
    3 => t('device (medical)'),
    4 => t('device (non-medical)'),
    5 => t('new educational method'),
    6 => t('software'),
    7 => t('mobile app'),
    8 => t('diagnostic (medical)'),
    9 => t('diagnostic (non-medical)'),
    10 => t('policy')
    );
    
    //insert other textfield first
    $selectresdevother_tf=$form_state['values']['resdev_other_textfield']; //get the dev descriptors other textfield value if user choose other
    //delete all blankspace before compare to null
    $selectresdevother_tf=trim($selectresdevother_tf,' ');
    $selectresdevother_tf=trim($selectresdevother_tf);
    $selectresdevother_tf=trim($selectresdevother_tf,"\x00..\x1F");
    
    if($selectresdevother_tf!= null){ //if user actually input something in the other textfield
        $dbnewdid_insert = db_query("select count(id) from {ff_res_descriptors}")->fetchField(); //get the auto increment did
        $dbnewdid_insert=$dbnewdid_insert+1;
        
        $dbnewdid_result=db_insert('ff_res_descriptors') //update the descriptors table
        ->fields(array(
        'text' => $selectresdevother_tf,
        ))
        ->execute();
        
        $dbdespdev_resultname = db_insert('ff_researchers_res_descriptors')  //insert researchers and descriptors table
        ->fields(array(
        'rid' => $curuserid,
        'did' => $dbnewdid_insert,
        ))
        ->execute();
    }
    //insert all the checkboxes options
    $selectresdev_id=$form_state['values']['resdev_cbchoice']; 
    $selectresdev_id=array_diff($selectresdev_id, array(0)); //delete all the zero values
    foreach($selectresdev_id as $returncbid){
        $cur_key=array_search($returncbid,$resdexp_cbop_submit);
        $cur_key=$cur_key+10; //find the db developing did        
        
        //start insert each choice
        $dbdespdev_resultname = db_merge('ff_researchers_res_descriptors') 
        ->key(array('rid' => $curuserid,'did'=>$cur_key))
        ->fields(array(
        'rid' => $curuserid,
        'did' => $cur_key,
        ))
        ->execute();
    }
    
    //same for the test part
    $selectrestestother_tf=$form_state['values']['restest_other_textfield']; //get the test descriptors other textfield value if user choose other
    //delete all blankspace before compare to null
    $selectrestestother_tf=trim($selectrestestother_tf,' ');
    $selectrestestother_tf=trim($selectrestestother_tf);
    $selectrestestother_tf=trim($selectrestestother_tf,"\x00..\x1F");
    
    
    if($selectrestestother_tf!= null){ //if user actually input something in the other textfield
        $dbnewdidtest_insert = db_query("select count(id) from {ff_res_descriptors}")->fetchField(); //get the auto increment did
        $dbnewdidtest_insert=$dbnewdidtest_insert+1;
        
        $dbnewdidtest_result=db_insert('ff_res_descriptors') //update the descriptors table
        ->fields(array(
        'text' => $selectrestestother_tf,
        ))
        ->execute();
        
        $dbdesptest_resultname = db_insert('ff_researchers_res_descriptors')  //insert researchers and descriptors table
        ->fields(array(
        'rid' => $curuserid,
        'did' => $dbnewdidtest_insert,
        ))
        ->execute();
    }
    $selectrestest_id=$form_state['values']['restest_cbchoice']; 
    $selectrestest_id=array_diff($selectrestest_id, array(0)); //delete all the zero values
    foreach($selectrestest_id as $returncbid){
        $cur_key=array_search($returncbid,$resdexp_cbop_submit);
        $cur_key=$cur_key+20; //find the db testing did     
        
        //start insert each choice
        $dbdesptest_resultname = db_merge('ff_researchers_res_descriptors') 
        ->key(array('rid' => $curuserid,'did'=>$cur_key))
        ->fields(array(
        'rid' => $curuserid,
        'did' => $cur_key,
        ))
        ->execute();
    }
    
    $resdesp_timeop=array(1 => t('within the next year'),
    2 => t('within 2-5 years'),
    3 => t('within 5-10 years'),
    4 => t('in more than 10 years'),
    5 => t('never')
    );
    //outcome commercialized part 
    $resdesp_comid=array_filter($form_state['values']['rescomcbchoice']);
    
    foreach($resdesp_comid as $returncbid){
        $cur_key=array_search($returncbid,$resdesp_timeop);
        $cur_key=$cur_key+30;  //for the commercialized db part
        //start insert each choice
        $dbresdespcom_resultname = db_merge('ff_researchers_res_descriptors') 
        ->key(array('rid' => $curuserid,'did'=>$cur_key))
        ->fields(array(
        'rid' => $curuserid,
        'did' => $cur_key,
        ))
        ->execute();
    }
    //outcome affect part 
    $resdesp_affid=array_filter($form_state['values']['resaffectcbchoice']);
    
    foreach($resdesp_affid as $returncbid){
        $cur_key=array_search($returncbid,$resdesp_timeop);
        $cur_key=$cur_key+35;  //for the commercialized db part
        //start insert each choice
        $dbresdespaff_resultname = db_merge('ff_researchers_res_descriptors') 
        ->key(array('rid' => $curuserid,'did'=>$cur_key))
        ->fields(array(
        'rid' => $curuserid,
        'did' => $cur_key,
        ))
        ->execute();
    }
    
    //outcome describe radios part 
    $resdescribe_op_submit = array(41 => t('basic and/or fundamental research'), 
    42 => t('mostly basic and/or fundamental, mixed with some applied work'),
    43 => t('mostly applied and/or translational, mixed with some basic work'),
    44 => t('applied and/or translational'));
    $resdesp_desb=$form_state['values']['resdescribe'];
    $resdesp_desbid=array_keys($resdescribe_op_submit,$resdesp_desb);
    
    $dbresdespdesb_resultname = db_merge('ff_researchers_res_descriptors') 
        ->key(array('rid' => $curuserid,'did'=>$resdesp_desbid))
        ->fields(array(
        'rid' => $curuserid,
        'did' => $resdesp_desbid,
        ))
        ->execute();
    
    
    drupal_goto('ffresform/research_form_page15',$urloptions); //goto the next page
    
            
}