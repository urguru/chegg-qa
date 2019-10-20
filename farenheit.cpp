#include<iostream>
using namespace std;
void converter(float f)
{
    //Direct substitution of formula
    float c=(f-32)*(9/5);
    float k=c+273.15;
    cout<<f<<" degree farenheit is equal to "<<c<<" degree celsius and "<<k<<" kelvin\n";
}
int main()
{
    converter(97.5);
    converter(80);
}
