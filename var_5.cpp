#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void do_func(int a[],int n)
{
    int i=0;
    while(i<n)
    {
        if(a[i]==69)
            break;
        else if(a[i]==6)
        {
            a[a[i+3]<0?n+a[i+3]:a[i+3]]=a[a[i+1]<0?n+a[i+1]:a[i+1]]+a[a[i+2]<0?n+a[i+2]:a[i+2]];
        }
        else if(a[i]==9)
        {
            a[a[i+3]<0?n+a[i+3]:a[i+3]]=a[a[i+1]<0?n+a[i+1]:a[i+1]]*a[a[i+2]<0?n+a[i+2]:a[i+2]];
        }
        i=i+4;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)
        cin>>a[i];
    do_func(a,n);
    for(int i=0;i<n;++i)
        cout<<a[i]<<" ";
    return 0;
}

