#include<iostream>
#include<process.h>
#include"timer_implementation.cpp"
using namespace std;
int main()
{
    Timer t1;
    int choice=0;
    cout<<"C++ PROGRAM to implement Timer using simple for loop\n";
    while(choice!=-1)
    {
        cout<<"1.Reset the timer count to a different value\n";
        cout<<"2.Start the timer\n";
        cout<<"3.Exit\n";
        cin>>choice;
        switch (choice)
        {
            case 1:
            {
                int n;
                cout<<"Enter the new timer count\n";
                cin>>n;
                t1.reset(n);
                break;
            }
            case 2:
            {
                t1.start();
                break;
            }
            case 3:
            {
                cout<<"GOOD BYE ";
                choice=-1;
                break;
            }
            default:
            {
                cout<<"Wrong Choice\n";
            }
        }
    }
    return 0;
}
