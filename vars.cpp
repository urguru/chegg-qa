#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool find_possible(int arr[],int t,int i)
{
    if(i==3 || t<0)
        return false;
    if(t==0)
        return true;
    return (find_possible(arr,t-arr[i],i)||find_possible(arr,t-arr[i],i+1)||find_possible(arr,t,i+1));
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,x,y,z;
    cin>>t>>x>>y>>z;
    int arr[3]={x,y,z};
    if(find_possible(arr,t,0))
    {
        cout<<"Possible to achieve exact amount";
    }
    else
    {
        cout<<"Overpaid! These scammers owe me";
    }
    return 0;
}
