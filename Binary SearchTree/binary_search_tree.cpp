//This code assumes simon to be a computer and thus generates a random text for simon
#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<string>
using namespace std;
int main()
{
    //this is done so that we get new output every time the program is executed
    srand(time(0));
    char arr[4]={'R','G','B','Y'};
    string simon="",user;
    int score=0;
    //Assigning string to simon
    for(int i=0;i<10;++i)
    {
        simon+=arr[rand()%4];
    }
    cout<<"simonPattern: "<<simon<<endl;
    cout<<"userPattern: ";
    cin>>user;
    //Checking simon pattern with user pattern
    for(int i=0;i<10;++i)
    {
        if(simon[i]==user[i])
            score++;
        //The loop breaks if the character isnt same
        else
            break;
    }
    //The program outputs the score at the end
    cout<<"userScore: "<<score;
    return 0;
}
