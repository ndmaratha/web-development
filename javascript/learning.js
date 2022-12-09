 var btn_translate= document.querySelector("#btn");
 var txtinput= document.querySelector("#txtinput");
 console.log(txtinput);
 
 function clickeventhandler(){
     console.log('clicked');
     console.log("input",txtinput.value);
    }
    
    btn_translate.addEventListener("click", clickeventhandler);