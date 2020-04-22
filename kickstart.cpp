#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll res(ll n,ll d,ll a[])
{
    int x=n-1;
    while(x>=0)
    {
        if(d%a[x]==0)
        {
            x--;
        }
        else
        {
            d=d-(d%a[x]);
            x--;
        }
    }
    return d;
}
int main()
{
    ll t;
    cin>>t;
    ll k=1;
    while(t--)
    {
        ll n,d;
        cin>>n>>d;
        ll a[n];
        for(ll i=0;i<n;++i)
        {
            cin>>a[i];
        }
        cout<<"Case #"<<k<<": "<<res(n,d,a)<<endl;
    }
}
