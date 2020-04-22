#include<bits/stdc++.h>
using namespace std;
void print(int **arr,int n)
{
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void ans(int *arr[],int n)
{
    int c=0;
    int i=n/2;
    int j=n-1;
    arr[i][j]=++c;
    while(c<n*n)
    {
       i=i-1;j=j+1;
       if(i==-1 && j==n)
       {
           i=0;
           j=n-2;
       }
       if(arr[i=(n+i)%n][j=j%n]!=0)
       {
           i=i+1;
           j=j-2;
       }
       arr[i=(n+i)%n][j=(j+n)%n]=++c;
    }
}
int main()
{
    int n;
    cin>>n;
    int **arr=new int*[n];
    for(int i=0;i<n;++i)
        arr[i]=new int[n];
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            arr[i][j]=0;
        }
    }
    ans(arr,n);
    print(arr,n);
}
