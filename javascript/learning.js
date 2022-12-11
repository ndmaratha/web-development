 var btn_translate= document.querySelector("#btn");
 var txtinput= document.querySelector("#txtinput");
 var outputdiv= document.querySelector("#output");
/*  console.log(txtinput);
 */
var serverurl="https://lessonfourapi.tanaypratap.repl.co/translate/yoda.json";

function gettranslation(text){
    return serverurl + "?" + "text=" +text;
}

function errorhandler(error){
    console.log("error occured",error);
    alert("something went wrong try after sometime");
}

 function clickeventhandler(){
/*      console.log('clicked');
     console.log("input",txtinput.value);
 */
/* outputdiv.innerText="translated"+txtinput.value; */
var inputtxt=txtinput.value;
fetch(gettranslation(inputtxt))
.then(Response => Response.json())
.then(json => console.log(json.contents.translated))
.catch(errorhandler)

};
    
    btn_translate.addEventListener("click", clickeventhandler);