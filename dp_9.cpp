#include<bits/stdc++.h>
using namespace std;
int jumps(int arr[],int n)
{
    if(n==0 || arr[0]==0)
        return -1;
    int jumps[n];
    jumps[0]=0;
    for(int i=1;i<n;++i)
    {
        jumps[i]=INT_MAX;
        for(int j=0;j<i;++j)
        {
            if(i<=j+arr[j] && jumps[j]!=INT_MAX)
            {
                jumps[i]=min(jumps[i],jumps[j]+1);
                break;
            }
        }
    }
    for(int i=0;i<n;++i)
        cout<<jumps[i]<<" ";
    cout<<endl;
    return jumps[n-1];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
        }
        cout<<jumps(a,n)<<endl;
    }
}
