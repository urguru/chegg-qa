document.getElementById('btn').addEventListener('click',function(e){
    var name=document.getElementById('username').value;
    var passwd=document.getElementById('password').value;
    var id=document.getElementById('student-id').value;
    var success=true;
    console.log(name,passwd,id);
    var letters = /^[A-Za-z]+$/;
    document.getElementById('result').innerHTML = "";
    if(!name.match(letters))
    {
        document.getElementById('user-hide').setAttribute('class','hide');
        success=false;
    }
    else{
        document.getElementById('user-hide').setAttribute('class', '');     
    }
    if (!(passwd.match(/[a-z]/) && passwd.match(/[A-Z]/)) && passwd.match(/[0-9]/))
    {
        document.getElementById('passwd-hide').setAttribute('class', 'hide');
        success = false;
    }
    else
    {
        document.getElementById('passwd-hide').setAttribute('class', '');
    }
    if(!(id.length==9))
    {
        document.getElementById('id-hide').setAttribute('class', 'hide');
        success = false;
    }
    else
    {
        document.getElementById('id-hide').setAttribute('class', '');
    }

    if(success==true)
    {
        document.getElementById('result').innerHTML="Successful";
    }
})

document.getElementById('message').addEventListener('keyup',e=>{
    str=document.getElementById('message').value;
    var newStr = str.replace(/  +/g, ' ');
    var lst=newStr.split(' ');
    document.getElementById('word-count').innerHTML=26-lst.length;
    if(lst.length>=26)
    {
        document.getElementById('message').disabled=true;
    }
})