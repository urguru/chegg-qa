// temp stores the string retrevied from the window prompt
var temp = prompt("Please enter your birthday");
birthdate = new Date(temp);
today = new Date();
//Printing new date and the birthdate to the user
document.writeln("<p>Today's Date : " + today.toDateString() + "</p>");
document.writeln("<p>Your Birthday : " + birthdate.toDateString() + "</p>");
//Check if the user's birthday is today
if((today.getDate() == birthdate.getDate()) && today.getMonth()==birthdate.getMonth()) 
{
  document.writeln("<h1>We wish you a very happy birthday</h1>");
} 
// If its not today then
else 
{
  var age;
  //If the month and date in which the user was born has been elapsed then subtract the years
  if (today.getMonth() >= birthdate.getMonth() && today.getDate()>birthdate.getDate()) {
    age = today.getYear() - birthdate.getYear();
  } 
  //Else we need subtract one more year
  else {
    age = today.getYear() - birthdate.getYear() - 1;
  }
  document.writeln("<p>Today you are " + age + " years old!!!</p>");
  document.writeln("<p>In 10 years you will be " + (age + 10) + " years old</p>");
}
