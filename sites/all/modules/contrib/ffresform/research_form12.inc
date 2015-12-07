<?php
//page 12 form and submit 
function form_my_research_form_page12($form, &$form_state) {
   
    $curuserid=$_GET['userid']; //get current user id which passed from the previous url
    
    $keywords = array('','','','','','','','','','','','','','','');
    $result=db_query("select keyword from {ff_researchers_keywords} where rid=:rid",array(':rid' => $curuserid));
    if ($result) {
        $i = 0;
        while ($row = $result->fetchAssoc()) {
            $keywords[$i] = $row['keyword'];
            $i = $i + 1;
        }
    }

    $form['hiddenuserid']=array(  //initialize a form hidden to store the userid to retrieve in submit
        '#type' => 'hidden',
        '#value' => $curuserid,
    );
    $form['maintitle'] = array(
        '#type' => 'item',
        '#title' => t('Please provide 7-15 detailed keywords that specifically describe your research.'),
         '#required' => TRUE
    );
    $form['maintitlehelp'] = array(
        '#type' => 'item',
        '#title' => t('At least seven. Leave it blank if skip.')
    );
    $form['keyword1'] = array( 
        '#type' => 'textfield',
        '#title' => 'Keyword #1',
        '#required' => TRUE,
        '#default_value' => $keywords[0],
        '#autocomplete_path' => 'keywords/autocomplete'
    );
    $form['keyword2'] = array( 
        '#type' => 'textfield',
        '#title' => 'Keyword #2',
        '#required' => TRUE,
        '#default_value' => $keywords[1],
        '#autocomplete_path' => 'keywords/autocomplete'
    );
    $form['keyword3'] = array( 
        '#type' => 'textfield',
        '#title' => 'Keyword #3',
        '#required' => TRUE,
        '#default_value' => $keywords[2],
        '#autocomplete_path' => 'keywords/autocomplete'
    );
    $form['keyword4'] = array( 
        '#type' => 'textfield',
        '#title' => 'Keyword #4',
        '#required' => TRUE,
        '#default_value' => $keywords[3],
        '#autocomplete_path' => 'keywords/autocomplete'
    );
    $form['keyword5'] = array( 
        '#type' => 'textfield',
        '#title' => 'Keyword #5',
        '#required' => TRUE,
        '#default_value' => $keywords[4],
        '#autocomplete_path' => 'keywords/autocomplete'
    );
    $form['keyword6'] = array( 
        '#type' => 'textfield',
        '#title' => 'Keyword #6',
        '#required' => TRUE,
        '#default_value' => $keywords[5],
        '#autocomplete_path' => 'keywords/autocomplete'
    );
    $form['keyword7'] = array( 
        '#type' => 'textfield',
        '#title' => 'Keyword #7',
        '#required' => TRUE,
        '#default_value' => $keywords[6],
        '#autocomplete_path' => 'keywords/autocomplete'
    );
    $form['keyword8'] = array( 
        '#type' => 'textfield',
        '#title' => 'Keyword #8',
        '#default_value' => $keywords[7],
        '#autocomplete_path' => 'keywords/autocomplete'
    );
    $form['keyword9'] = array( 
        '#type' => 'textfield',
        '#title' => 'Keyword #9',
        '#default_value' => $keywords[8],
        '#autocomplete_path' => 'keywords/autocomplete'
    );
    $form['keyword10'] = array( 
        '#type' => 'textfield',
        '#title' => 'Keyword #10',
        '#default_value' => $keywords[9],
        '#autocomplete_path' => 'keywords/autocomplete'
    );
    $form['keyword11'] = array( 
        '#type' => 'textfield',
        '#title' => 'Keyword #11',
        '#default_value' => $keywords[10],
        '#autocomplete_path' => 'keywords/autocomplete'
    );
    $form['keyword12'] = array( 
        '#type' => 'textfield',
        '#title' => 'Keyword #12',
        '#default_value' => $keywords[11],
        '#autocomplete_path' => 'keywords/autocomplete'
    );
    $form['keyword13'] = array( 
        '#type' => 'textfield',
        '#title' => 'Keyword #13',
        '#default_value' => $keywords[12],
        '#autocomplete_path' => 'keywords/autocomplete'
    );
    $form['keyword14'] = array( 
        '#type' => 'textfield',
        '#title' => 'Keyword #14',
        '#default_value' => $keywords[13],
        '#autocomplete_path' => 'keywords/autocomplete'
    );
    $form['keyword15'] = array( 
        '#type' => 'textfield',
        '#title' => 'Keyword #15',
        '#default_value' => $keywords[14],
        '#autocomplete_path' => 'keywords/autocomplete'
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
    $secondary_cid = 0;
    $curuserid=$form_state['values']['hiddenuserid'];    
    $result=db_query("select secondary_cid from {ff_researchers} where id=:rid",array(':rid' => $curuserid));
    if ($result) {
        while ($row = $result->fetchAssoc()) {
            if($row['secondary_cid'] != null){
                $secondary_cid = $row['secondary_cid'];    
            }
        }
    }
    $pagegoto_number=$secondary_cid+7; //base on page2 
    $pagegoto_url='ffresform/research_form_page'.$pagegoto_number; //cat url string
    $urloptions = array('query' => array('userid' => $curuserid)); 
    drupal_goto($pagegoto_url,$urloptions);
}
//custom validate function for page 12
function form_my_research_form_page12_validate($form, &$form_state) {
 

    $keywordarray=array(); //define the keyword array
    for ($countkey = 1; $countkey <= 15; $countkey++){
        $formkey='keyword'.$countkey;
        $keywordvalue=$form_state['values'][$formkey];
        if(strlen($keywordvalue)!= 0){  //ignore the empty value of keyword textfield
            $keywordarray[$countkey]=$keywordvalue;
        }
    }
    $keywordarray = array_map('trim', $keywordarray);

    $keywordarray=array_unique($keywordarray); //ignore the duplicate keyword to avoid the db insert error
    if (sizeof($keywordarray) < 7) {
        form_set_error('Keywords', 'Please provide atleast 7 unique keywords');
    }
  
}

function form_my_research_form_page12_submit($form, &$form_state){
    //add the submit function here, the function related with database
    
    $curuserid=$form_state['values']['hiddenuserid'];    
    $urloptions = array('query' => array('userid' => $curuserid)); //pass current userid to next page
    
    //insert keywords into db
    $keywordarray=array(); //define the keyword array
    for ($countkey = 1; $countkey <= 15; $countkey++){
        $formkey='keyword'.$countkey;
        $keywordvalue=$form_state['values'][$formkey];
        if(strlen($keywordvalue)!= 0){  //ignore the empty value of keyword textfield
            $keywordarray[$countkey]=$keywordvalue;
        }
    
    }
            
    $keywordarray=array_unique($keywordarray); //ignore the duplicate keyword to avoid the db insert error
    $keywordarray=array_values($keywordarray);  //get the value of keyword array
    
    foreach($keywordarray as $keyrow){
        //do the db insert
        //first generate all the new keywords using merge all keyword to do this avoid to search big keyword table every time     
        $dbkeymerge_result =db_merge('ff_keywords')
        ->key(array('keyword' => $keyrow))
        ->fields(array('keyword' => $keyrow))
        ->execute();
    }
    //before insert researchers_keywords delete the already existed records
    $db_ridexisted=db_query("select count(*) from {ff_researchers_keywords} where rid=:rid",array(':rid' => $curuserid))->fetchField();
    
    if($db_ridexisted!=0){//if there is records in keywords table, then delete before insert new one
        $dbkey_delete = db_query("delete from {ff_researchers_keywords} where rid=:rid",array(':rid' => $curuserid));
        if($dbkey_delete){ //delete successfully, then insert new rows
            foreach($keywordarray as $keyrow){
                //update researchers_keywords table 
                $dbkeyinsert_resultname = db_merge('ff_researchers_keywords') //use the db merge to avoid same keyword input
                ->key(array('rid' => $curuserid,'keyword'=>$keyrow))
                ->fields(array(
                'rid' => $curuserid,
                'keyword' => $keyrow,
                ))
                ->execute();
            }
        }
    
    }else{ //else insert directly
        foreach($keywordarray as $keyrow){
            //update researchers_keywords table 
            $dbkeyinsert_resultname = db_merge('ff_researchers_keywords') //use the db merge to avoid same keyword input
            ->key(array('rid' => $curuserid,'keyword'=>$keyrow))
            ->fields(array(
            'rid' => $curuserid,
            'keyword' => $keyrow,
            ))
            ->execute();
        }
    
    }
    
    drupal_goto('ffresform/research_form_page13',$urloptions); //goto the next page
            
}
