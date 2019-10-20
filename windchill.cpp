#include<iostream>
#include<cmath>
using namespace std;
//Calling the values by reference and then storing the input
void input(float &windspeed,float &temp)
{
    cout<<"Enter the windspeed in miles per hour \n";
    cin>>windspeed;
    cout<<"Enter the temperature in farenheit\n";
    cin>>temp;
}
//Calculating the windchill factor using the given formula
float windchill_factor(float windspeed,float temp)
{
    float w;
    w=35.74+0.6215*temp-35.75*pow(windspeed,0.16)+0.4275*temp*pow(windspeed,0.16);
    return w;
}
int main()
{
    cout<<"Welcome to the WindChill Factor Calculator\n\n\n";
    float windspeed,temp,w_f;
    input(windspeed,temp);
    w_f=windchill_factor(windspeed,temp);
    cout<<"\n\n\The Wind Chill Factor is "<<w_f<<endl;
    cout<<"\nThank You";
}
