#include<bits/stdc++.h>
using namespace std;
string func(int i,int j,int m,int n,int val,string s)
{
    if(i==j)
    {
        return "IMPOSSIBLE"
    }
    if(i==m && j==n)
    {
        return s;
    }
    return func(i+val*2,j,m,m,val*2,s+'')
}
int main()
{


}
