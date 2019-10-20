#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    //Since the user can also enter the input in string we store the input in a string
    string str;
    cout<<"Enter the number of kids you have\n";
    cin>>str;
    //This is used to convert the string read into an integer
    //We first create a string buffer
    stringstream read(str);
    int n;
    //Then we store the integer value in the n variable
    read>>n;
    //We use the try catch block here
    try
    {
        //If the value of n is zero(It becomes zero when the user has entered the number in words, so we throw an exception
        if(n==0)
            throw str;
        //Else we just print the number of children
        else
            cout<<"You have "<<n<<" children\n";
    }
    //The catch block.Here we tell the user that he has entered the value in words
    catch(string str)
    {
        cout<<"You have given the answer in words.You need to enter the answer in integer\n";
    }
    //Finally we clear the console input stream
    cin.clear();
}
