//Joshua Cobb
//10/31/19
#include<cmath>
#include<iostream>
#include<stdio.h>
using namespace std;

struct Disc
{ //linked list for towers
    int num;
    Disc* next;

    Disc(){ //constructor
        num = 0;
        next = NULL;
        }
    Disc(int n){
        num = n;
        next = NULL;

        }
};


void push(Disc**, int); //push function
int pop(Disc*); //pop function
void display(Disc*, Disc*, Disc*, int);//prints pegs
void solveHanoi(int, int, int, int); // solution function
bool win(Disc*, int); //win condition function

int main(){
//class objects
Disc* temp1 = NULL;
Disc* temp2 = NULL;
Disc* temp3 = NULL;
temp1 = new Disc;
temp2 = new Disc;
temp3 = new Disc;
//integer variables
int num, solved, choice, end, removed, count = 0, tower;
//win condition variable
bool won = false;

cout << "Enter the number of disks" << endl;
cin >> num;//enters the number of disks
while (num < 1 && num > 10){ //confirmation loop
cout << "Error wrong entry try again" << endl;
cout << "Enter the number of disks" << endl;
cin >> num;
}
if (num >= 1 && num <= 10){
solved = pow(2, num)-1; //minimum number of moves required to win
}

for(int i = num; i > 0; i--)
{
    push(&temp1, i); //inserts disks onto tower
}
display(temp1, temp2, temp3, num); //displays towers

cout << "Enter 1 to remove first disc from tower 1? (enter -1 to quit and view solution)" << endl;
cin >> choice; //begins the game
while (choice != 1)
{ //confirmation loop
    cout << "Not a valid entry, try again" << endl;
    cout << "Enter 1 to remove first disc from tower 1? (enter -1 to quit and view solution)" << endl;
    cin >> choice;
}
while (choice != -1)
{ //loop to begin game
    if (choice == 1)
    { // disk removal from the peg
        removed = pop(temp1); // call function to remove disk from peg 1
        cout << removed << endl;
        cout << "Which stack do you wish to move it to (2 or 3)?" << endl;
        cin >> choice; //peg you want to move the disk to
        while(choice != 2 && choice != 3){ //confirmation of peg
        cout << "Not a valid tower, try again" << endl;
        cout << "Which stack do you wish to move it to (2 or 3)?" << endl;
        cin >> choice;
        }
        if (choice == 2){// disk add to the peg
        push(&temp2, removed); //call function to add disk to peg
        count++;
        display(temp1, temp2, temp3, num);//displays towers
        }
        else if (choice == 3){// disk add to the peg
        push(&temp3, removed);//call function to add disk to peg
        count++;
        display(temp1, temp2, temp3, num);//displays towers
        }
    }

        if (choice == 2)
        {// disk removal from the peg 2
            removed = pop(temp2);// call function to remove disk from peg 2
            cout << "Which stack do you wish to move it to (1 or 3)?" << endl;
            cin >> choice;//peg you want to move the disk to
            while (choice != 1 || choice != 3){//confirmation of peg
            cout << "Not a valid tower, try again" << endl;
            cout << "Which stack do you wish to move it to (1 or 3)?" << endl;
            cin >> choice;
            }
            if (choice == 1){// disk add to the peg
            push(&temp1, removed);//call function to add disk to peg
            count++;
            display(temp1, temp2, temp3, num);//displays towers
            }
            else if (choice == 3){// disk add to the peg
            push(&temp3, removed);//call function to add disk to peg
            count++;
            display(temp1, temp2, temp3, num);//displays towers
            }
        }

        if (choice == 3){// disk removal from the peg 3
        removed = pop(temp3);// call function to remove disk from peg 3
        cout << "Which stack do you wish to move it to (1 or 2)?" << endl;
        cin >> choice;//peg you want to move the disk to
        while (choice != 1 || choice != 2){//confirmation of peg
        cout << "Not a valid tower, try again" << endl;
        cout << "Which stack do you wish to move it to (1 or 2)?" << endl;
        cin >> choice;
        }
        if (choice == 1){// disk add to the peg
        push(&temp1, removed);//call function to add disk to peg
        count++;
        display(temp1, temp2, temp3, num);//displays towers
        }
        else if (choice == 2){// disk add to the peg
        push(&temp2, removed);//call function to add disk to peg
        count++;
        display(temp1, temp2, temp3, num);//displays towers
        }
        }
        if (tower == 2){
        won = win(temp2, num); //call function to determine if you won
        }
        else if (tower == 3){
        won = win(temp3, num); //call function to determine if you won
        }
        if (won == true){
        break;
        }
        cout << "From which stack number do you want to remove a disc (1, 2, or 3)?" << endl;
        cin >> choice; //which peg you want to remove the disk from
        while (choice < 1 && choice > 3){//confirmation loop
        cout << "Not a valid tower, try again" << endl;
        cout << "From which stack number do you want to remove a disc (1, 2, or 3)?" << endl;
        cin >> choice;
    }
}

if (choice == -1){ //exit condition
solveHanoi(num, 1, 2, 3); //call function to solve
}

if (won == true){ //win statement
cout << "CONGRATULATIONS, YOU WON!!!!" << endl;
cout << "You used " << count << " moves to win" << endl; //prints moves
cout << "You needed " << solved << " moves to win" << endl; //prints optimal moves
}
//delete temp1;
//delete temp2;
//delete temp3;
}
void solveHanoi(int n, int start, int end, int tmp){
if (n == 1){
cout << "Move disc " << n << " from " << start << " to " << end << endl;
}
else {
   solveHanoi(n-1, start, tmp, end);
   cout << "Move disc " << n << " from " << start << " to " << end << endl;
   solveHanoi(n-1, tmp, end, start);
}
}
bool win(Disc* end, int n){ //function to prove win
Disc* start; // hanoistack object
int count = 0; //counts disks on stack
if (end->num != 1){ //base case
return false;
}
else{
for (start = end; start; start = start->next){//loop to confirm order of stack
if (start->num > start->next->num){// exits is false
return false;
}
else{ //counter statement
count++;
}
}
}
if (count == n){//win statement
return true;
}
}
void push(Disc** pole, int n){ // adds disks to pegs
Disc* temp = new Disc;
temp->num = n;
temp->next = *pole;
*pole = temp;
}

int pop(Disc* pole){ // removes disk from peg
int popper;
Disc* top = pole;
if (pole == NULL){
cout << "There is no disc on stack" << endl;
}
else{
pole = top->next;
popper = top->num;
delete top;
return popper;
}
}

void display(Disc* pole, Disc* pole2, Disc* pole3, int n)
{ //displays towers
    int count = 0, count2 = 0, count3 = 0;
    int placeholder = 1;
    int base = (n*2)+1;

    while(pole)
    {
        pole = pole->next;
        count++;
    }

    while(pole2)
    {
        pole2 = pole2->next;
        count2++;
    }

    while(pole3)
    {
        pole3 = pole3->next;
        count3++;
    }

    for (int i = 0; i < count; i++)
    {
        int counter = 0;
        while (counter < placeholder){
        cout << "#";
        counter++;
        }
        cout << "|";
        counter = 0;
        while (counter < placeholder){
        cout << "#";
        counter++;
        }
        cout << endl;
        placeholder++;
    }

    for (int i = 0; i < base; i++)
    {
        cout << "=";
    }
    cout << endl;

    placeholder = 0;
    for (int i = 0; i < count2; i++)
    {
        int counter = 0;
        while (counter < placeholder){
        cout << "#";
        counter++;
        }
        cout << "|";
        counter = 0;
        while (counter < placeholder){
        cout << "#";
        counter++;
        }
        cout << endl;
        placeholder++;
    }

    for (int i = 0; i < base; i++)
    {
        cout << "=";
    }
    cout << endl;

    placeholder = 0;
    for (int i = 0; i < count3; i++)
    {
        int counter = 0;
        while (counter < placeholder){
        cout << "#";
        counter++;
        }
        cout << "|";
        counter = 0;
        while (counter < placeholder){
        cout << "#";
        counter++;
        }
        cout << endl;
        placeholder++;
    }
    for (int i = 0; i < base; i++)
    {
        cout << "=";
    }
    cout << endl;
}
