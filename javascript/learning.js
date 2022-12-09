 var btn_translate= document.querySelector("#btn");
 var txtinput= document.querySelector("#txtinput");
 var outputdiv= document.querySelector("#output");
/*  console.log(txtinput);
 */
 function clickeventhandler(){
/*      console.log('clicked');
     console.log("input",txtinput.value);
 */
outputdiv.innerText="translated"+txtinput.value;
    }
    
    btn_translate.addEventListener("click", clickeventhandler);