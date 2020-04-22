#include<bits/stdc++.h>
using namespace std;
map<string,int> m;
int func(int pres,int finals)
{
    if(m.find(toS))
    if(pres>finals)
        return 0;
    if(pres==finals)
        return 1;
    return func(pres+1,finals)+func(pres+2,finals);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        arr[0]=0;
        arr[1]=1;
        for(int i=2;i<=n;;++i)
        {

        }
    }
    return 0;
}
