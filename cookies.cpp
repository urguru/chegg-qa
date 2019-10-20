//The code has been written as mentioned in the comments of the skeletal code given in the question
#include<iostream>
using namespace std;
int main()
{
    //Initial variable declaration
    int numBoxes,totalBoxes,numSellers;
    double averageBoxes;
    //Assigning values to the variables
    totalBoxes=0;
    numSellers=1;
    cout<<"      **** Cookie Sales Information ****\n\n";
    cout<<"Enter number of boxes of cookies sold by seller "<<numSellers<<" (or -1 to quit): ";
    cin>>numBoxes;
    //The while loop exits if numBoxes==-1
    while(numBoxes!=-1)
    {
        totalBoxes+=numBoxes;
        numSellers++;
        cout<<"Enter number of boxes of cookies sold by seller "<<numSellers<<" (or -1 to quit): ";
        cin>>numBoxes;
    }
    numSellers--;
    //If sellers are none then zero
    if(numSellers==0)
    {
        cout<<"\nNo boxes were sold.\n";
    }
    //To calculate the average number of boxes sold
    else
    {
        averageBoxes=totalBoxes/numSellers;
        cout<<"The number of sellers is "<<numSellers<<" and the average number of boxes sold per seller is "<<averageBoxes<<endl;
    }
    return 0;
}
