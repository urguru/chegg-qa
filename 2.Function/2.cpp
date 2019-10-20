#include<iostream>
using namespace std;
int h(int n)
{
    if(n==2||n==1||n==0)
    {
        return 1;
    }
    else
    {
       return h(n)+h(n-2);
    }
}
int main()
{
    cout<<h(3);
    return 0;
}

