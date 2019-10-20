#include<iostream>
using namespace std;
template<typename T>
T f(T x,T y)
{
    x-=1;
    y+=3;
    return x/y;
}
void g(int &x,int &y)
{
    x--;
    y=y+3;
}
int main()
{
    int x=6;
    int y=7;
    //f(6,7)
    //x=5 and y=10
    //x/y=0.5 because we are calling the value by double
    cout<<f<double>(x,y)<<endl;
    //x value hasn't changed so its 6
    //y value hasnt changed so its 7
    cout<<x<<endl;
    cout<<y<<endl;
    //f(6,7)
    //x=x-1=5;
    //y=y+3=10
    //x/y=0 because it is an integer division because we haved called the function as a function for integers
    cout<<f<int>(x,y)<<endl;
    //g(6,7)
    //Here we are passing the values by reference so any changes made here will affect the actual values
    //x=x-1=5;
    //y=y+3=10
    g(x,y);
    //x will be 5
    cout<<x<<endl;
    //y will be 10
    cout<<y<<endl;

}
