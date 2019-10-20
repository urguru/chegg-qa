#include<iostream>
//For realloc stdlib.h is used
#include<stdlib.h>
using namespace std;
//Function for calculating the average
double calcAvg(double *arr,int size)
{
    double avg=0;
    for(int i=0;i<size;++i)
    {
        avg+=arr[i];
    }
    avg=avg/size;
    return avg;
}
int main()
{
   double *numDoubles=new double[1];
   double average;
   int size=0;
   cout<<"Welcome\n";
   double temp=0;
   cout<<"Input a number or enter -1 to stop \n";
   while(true)
   {
       cin>>temp;
       if(temp==-1)
       {
            break;
       }
       //Realloc creates a new array of the new size and copies everything back to the new pointer
       numDoubles[size]=temp;
       size++;
       numDoubles=(double *)realloc(numDoubles,sizeof(double)*(size+1));
   }
   average=calcAvg(numDoubles,size);
   cout<<"Average is "<<average;
   //Deleting the array
   delete[] numDoubles;
   return 0;
}
