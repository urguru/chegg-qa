#include<bits/stdc++.h>
using namespace std;
void fun(int n,int k,vector<int> v,int x)
{
    //cout<<n<<" "<<k<<endl;
    if(k==0 && v.size()==x)
    {
        for(int i=0;i<v.size();++i)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    if(n==0 || k<=0)
        return;
    if(k==0)
    {
        for(int i=0;i<v.size();++i)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    v.push_back(n);
    fun(n,k-n,v,x);
    v.pop_back();
    fun(n-1,k,v,x);
}
void func(int n,int k)
{
    vector<int> v;
    fun(n,k,v,n);
}
int main()
{
    int n,k;
    cin>>n>>k;
    func(n,k);
}
