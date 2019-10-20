// The function runs when the DOM is loaded
document.addEventListener('DOMContentLoaded',function(){
    // Adding an event listener to the button
    document.getElementById('btn').addEventListener('click', e => {
        // retreiving the input from the input field
        let num = document.getElementById('txt-holder').value;
        // Now checking if the input is a number 
        if(validateNumber(num))
        {
            // Then checking if the number is prime
            isPrimeNumber(Number(num));
        }
    });   
})
function validateNumber(num) {
    if (Number(num)) {
        return true;
    }
    else {
        alert("Please enter numeric value");
        document.getElementById('txt-holder').value="";
    }
}

function isPrimeNumber(num)
{
    for(var i=2;i<num/2;++i)
    {
        if(num%i==0)
        {
            alert('This is not a prime number');
            document.getElementById('txt-holder').value = "";
            return;
        }
    }
    var reverse=reversNumber(num);
    console.log(reverse);
    alert('This is a prime number and reverse is '+reverse);
}
function reversNumber(num)
{
    var reverse=0;
    while(num>0)
    {
        reverse=reverse*10+num%10;
        num=Math.floor(num/10);
        console.log(reverse);
    }
    return reverse;
}