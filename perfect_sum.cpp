#include<bits/stdc++.h>
using namespace std;
void helper(int arr[],int sum,int n,int &c)
{
    if(sum<0)
        return;
    if(n==0 && sum==0)
     {
         c++;
         return;
     }
    if(n==0)
        return;
    helper(arr,sum-arr[n-1],n-1,c);
    helper(arr,sum,n-1,c);

}
int func(int arr[],int sum,int n)
{
    int c=0;
    helper(arr,sum,n,c);
    return c;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;++i)
            cin>>arr[i];
        int sum;
        cin>>sum;
        cout<<func(arr,sum,n)<<endl;
    }
}
