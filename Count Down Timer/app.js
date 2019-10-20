function countDown() {
  // The variable now holds the current date
  var now = new Date();
  //.getDay() gives which day it is ie 0-Sunday 1-Monday 2-Tuesday...6-Saturday
  //So if its saturday today then we will have 6 days and some hours remaining
  //If its friday then we will have 0 days and some hours remaining
  //If its thursday then we will have 1 days and some hours remaining
  //If its sunday then we will have 5 days and some hours remaining for nxt saturday
  //The variable d holds that value
  d = now.getDay() % 7;
  //Remaining hours for next day will be the current time subtracted from 23 hours and not from 24 hours
  //Because the remaining one hour is being divided into minutes and seconds
  h = 23 - now.getHours();
  //The same condition for the remaining minutes in an hour we subtract from 59 and not from 60
  m = 59 - now.getMinutes();
  s = 59 - now.getSeconds();
  //This is for better styling
  h = h < 10 ? "0" + h : h;
  m = m < 10 ? "0" + m : m;
  s = s < 10 ? "0" + s : s;
  //This is for adding the values to the HTML
  //This calculates for the next saturday at 00:00 hours
  document.getElementById("days").innerText = d;
  document.getElementById("hours").innerText = h;
  document.getElementById("minutes").innerText = m;
  document.getElementById("seconds").innerText = s;
  //This function calls the set timeout function every second
  setTimeout(countDown, 1000);
}

countDown();
