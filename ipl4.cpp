#include<bits/stdc++.h>
using namespace std;
int res(int arr[],int n,int i)
{
    if((i+arr[i]>=n)||(i-arr[i])<0)
        return false;
   if(arr[(i+arr[i])]==0 || arr[i-arr[i]]==0)
        return true;
   return ((arr,n,i+arr[i])&&(arr,n,i-arr[i]));
}
int main()
{
    int n;
    cin>>n;
   int arr[n];
   for(int i=0;i<n;++i)
   {
       cin>>arr[i];
   }
   int index;
   cin>>index;
   if(res(arr,n,index))
    cout<<"true";
   else
    cout<<"false";
   return 0;
}
