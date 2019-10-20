// HW6 - Simon says game
// Author - Tyler Humphries
// 10/5/11

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string>

using namespace std;
int main () {
// variable declaration, initialization
string seq = "";
string userseq = "";
char color[4];
color[0]='R';
color[1]='G';
color[2]='B';
color[3]='Y';
int round;
round=1;
srand(time(NULL));

// loop of 15 rounds
while (round<16){

// Displays and erases sequence
seq +=color[rand()%4];

cout << seq << flush;
cout << "\010." << flush <<'\n';



//user input of sequence
cout << "Please enter " << round << " characters to match:";
cin >> userseq;




//if match continue with next round otherwise quit the loop
if (userseq != seq){
cout << "Sorry, you lose. The correct sequence was: " << seq;
break;
}



if (round == 15){
cout << "Congratulations! you win!";
break;
}
round++;
}


return 0;
}
