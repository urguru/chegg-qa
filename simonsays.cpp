#include<iostream>
#include<string>
using namespace std;

int main()
{
    string simonPatern;
    string userPattern;
    int userScore;
    int i;
    userScore=0;
    cin>>simonPatern;
    cin>>userPattern;
    //The loop runs for the size of the string
    for(int i=0;i<simonPatern.length();++i)
    {
        //We exit from the loop if the characters at a position arent equal
        if(simonPatern[i]!=userPattern[i])
        {
            break;
        }
        //Else we add one to userscore
        else
        {
            userScore++;
        }
    }
    //Finally we print the userScore
    cout<<"userScore : "<<userScore<<endl;
    return 0;
}
