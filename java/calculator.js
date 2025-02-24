let display = document.getElementById('display');
function addsymbol(input){
    display.value = display.value + input;
}

function calculate(){
    let res = eval(display.value);
    display.value = res;
}

function cleardisplay(){
    display.value ="0";
}