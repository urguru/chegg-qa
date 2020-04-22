#include<iostream>
using namespace std;
//This function return float
float bodymassCalc(float lbs)
{
    float w;
    //We calculate the Body mass as mentioned in the question
    w=(10/2.2046)*lbs;
    return w;
}
//The min function is for your reference to check if the function works fine
int main()
{
    float lbs,w;
    cout<<"Enter your weight in pound\n";
    cin>>lbs;
    w=bodymassCalc(lbs);
    cout<<"The body mass is "<<w;
    return 0;
}
