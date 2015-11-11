<?php
//page 13 form and submit 
function form_my_research_form_page13($form, &$form_state) {
    
    $curuserid=$_GET['userid']; //get current user id which passed from the previous url
    
    
    $form['hiddenuserid']=array(  //initialize a form hidden to store the userid to retrieve in submit
        '#type' => 'hidden',
        '#value' => $curuserid,
    );
    $form['maindesp'] = array(
        '#type' => 'item',
        '#title' => t('Donors often think about philanthropy in terms of "causes" that are close to their 
        heart or interests: for example, they want to make a difference in "autism therapy" or "green energy".
        <br>
        To connect you with donors, it is important you tell us which causes (social, technological, health-related,
        economical) your research may affect. For example, research on the art and science of music could be relevant 
        to "autism therapy" or research on soccer playing robots could have an impact on "homecare for the critically ill".
        <br>
        To inspire your thinking, some examples are provided below.')
    );
    
    $form['maintitle'] = array(
        '#type' => 'item',
        '#title' => t('Think deeply and creatively to provide at least 3 (and up to 7) causes (separated by commas) which 
        your research is likely to affect.'),
        '#required' => TRUE
    );
    $form['maintitlehelp'] = array(
        '#type' => 'item',
        '#title' => t('If any of the examples listed below are relevant, you may add them here.<br>
        At least three. Leave it blank if skip.')
    );
    
    $form['causes1'] = array( 
        '#type' => 'textfield',
        '#title' => 'Causes #1',
        '#required' => TRUE,
        '#autocomplete_path' => 'causes/autocomplete'
    );
    $form['causes2'] = array( 
        '#type' => 'textfield',
        '#title' => 'Causes #2',
        '#required' => TRUE,
        '#autocomplete_path' => 'causes/autocomplete'
    );
    $form['causes3'] = array( 
        '#type' => 'textfield',
        '#title' => 'Causes #3',
        '#required' => TRUE,
        '#autocomplete_path' => 'causes/autocomplete'
    );
    $form['causes4'] = array( 
        '#type' => 'textfield',
        '#title' => 'Causes #4',
        '#autocomplete_path' => 'causes/autocomplete'
    );
    $form['causes5'] = array( 
        '#type' => 'textfield',
        '#title' => 'Causes #5',
        '#autocomplete_path' => 'causes/autocomplete'
    );
    $form['causes6'] = array( 
        '#type' => 'textfield',
        '#title' => 'Causes #6',
        '#autocomplete_path' => 'causes/autocomplete'
    );
    $form['causes7'] = array( 
        '#type' => 'textfield',
        '#title' => 'Causes #7',
        '#autocomplete_path' => 'causes/autocomplete'
    );
    
    //help examples
    $form['mainhelptitle'] = array(
        '#type' => 'item',
        '#title' => t('To better understand what we mean with "causes", here are some example causes 
        (in no particular order and with no intent to express research preferences for Benefunder funding).
        <br>
        <br>
        Addiction to alcohol, drugs, etc.<br>
        Anti Bullying<br>
        Autism therapy<br>
        Clean drinking water<br>
        Climate change<br>
        Curing breast cancer<br>
        Data management<br>
        Disaster relief<br>
        Diversity in the workplace<br>
        Early detection of some disease<br>
        Education<br>
        Exploring the universe<br>
        Extraterrestrial life<br>
        Faith<br>
        Famine<br>
        Green energy<br>
        Home care for the very ill<br>
        Homelessness<br>
        Hospice care<br>
        Obesity<br>
        Pediatric cochlear implants<br>
        Philharmonic orchestras<br>
        Poverty - domestic and foreign<br>
        Promoting STEM for females<br>
        Rare diseases<br>
        Space exploration<br>
        Societal challenges<br>
        Supporting females in research<br>
        Supporting social and economic issues in some state<br>
        Teen pregnancy<br>
        Veteran issues<br>
        ')
    );
    
    
    $form['back']['#markup'] = "<input type='button' class='form-submit' value='Back' onclick='window.history.go(-1)'/>";
    
    $form['continuebutton'] = array( 
        '#type' => 'submit',
        '#value' => t('Continue')
        
    );
    
    return $form;
}

function form_my_research_form_page13_submit($form, &$form_state){
    //add the submit function here, the function related with database
    
    $curuserid=$form_state['values']['hiddenuserid'];    
    $urloptions = array('query' => array('userid' => $curuserid)); //pass current userid to next page
    
    //insert causes into db
    $causesarray=array(); //define the causes array
    for ($countkey = 1; $countkey <= 7; $countkey++){
        $formkey='causes'.$countkey;
        $causevalue=$form_state['values'][$formkey];
        if(strlen($causevalue)!= 0){  //ignore the empty value of causes textfield
            $causesarray[$countkey]=$causevalue;
        }
    
    }
            
    $causesarray=array_unique($causesarray); //ignore the duplicate keyword to avoid the db insert error
    $causesarray=array_values($causesarray);  //get the value of keyword array
    
    foreach($causesarray as $keyrow){
        //do the db insert
        //first generate all the new causes using merge all causes to do this avoid to search big causes table every time     
        $dbcausemerge_result =db_merge('ff_causes')
        ->key(array('cause' => $keyrow))
        ->fields(array('cause' => $keyrow))
        ->execute();
    }
    
    //before insert researchers_causes delete the already existed records
    $db_ridexisted=db_query("select count(*) from {ff_researchers_causes} where rid=:rid",array(':rid' => $curuserid))->fetchField();
    
    if($db_ridexisted!=0){//if there is records in causes table, then delete before insert new one
        $dbkey_delete = db_query("delete from {ff_researchers_causes} where rid=:rid",array(':rid' => $curuserid));
        if($dbkey_delete){ //delete successfully, then insert new rows
            foreach($causesarray as $keyrow){
                //then update researchers_causes table 
                $dbcauseinsert_resultname = db_merge('ff_researchers_causes') //use the db merge to avoid same cause input
                ->key(array('rid' => $curuserid,'cause'=>$keyrow))
                ->fields(array(
                'rid' => $curuserid,
                'cause' => $keyrow,
                ))
                ->execute();
            }
        }
    
    }else{ //else insert directly
        foreach($causesarray as $keyrow){
            //then update researchers_causes table 
            $dbcauseinsert_resultname = db_merge('ff_researchers_causes') //use the db merge to avoid same cause input
            ->key(array('rid' => $curuserid,'cause'=>$keyrow))
            ->fields(array(
            'rid' => $curuserid,
            'cause' => $keyrow,
            ))
            ->execute();
        }
    }
    
    drupal_goto('ffresform/research_form_page14',$urloptions); //goto the next page
    
            
}
