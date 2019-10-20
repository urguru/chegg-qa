#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
//Total classes are 15*5=75
//Total fees is 10000
//Fees per class will be 10000/75=133.33
int main()
{
    srand(time(0));
    int miss_class=0,iter_no=0;
    float money_lost=0;
    cout<<"Enter the number of iterations that you want to carry out\n";
    cin>>iter_no;
    for(int n=0;n<iter_no;++n)
    {
        miss_class=0;
        for(int i=0;i<15;++i)
        {
            //So here we check if the random value is between 0 and 33 then we consider it as a hit and then assume that the student
            //Will play overnight that day and the will not attend the next class
            if(rand()%99<33)
                miss_class++;
        }
        money_lost+=miss_class*133.33;
    }
    //Finally we calculate the average proce and the print it
    //For the higher average values the loss is around 665 dollars
    money_lost=money_lost/iter_no;
    cout<<"The average money lost due to Hearthstone is "<<money_lost<<endl;

}
