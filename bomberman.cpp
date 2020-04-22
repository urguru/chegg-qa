#include<bits/stdc++.h>
using namespace std;
int arr[]={-1,0,1};
//vector<string> bomberMan(int n, vector<string> grid)
//{


//}
void printarr(int *arr[],int m,int n)
{
    for(int i=0;i<m;++i)
    {
        for(int j=0;j<n;++j)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}
void counter(int *arr[],int m,int n,int t)
{
    int temp=2;
    while(temp<t)
    {
        for(int i=0;i<m;++i)
        {
            for(int j=0;j<n;++j)
            {
                if(arr[i][j]==1)
                {
                  for(int x=0;x<3;++x)
                  {
                      for(int y=0;y<3;++y)
                      {
                          if(i+x<m && i-x>=0 && y+j<n && j-y>=0)
                            arr[i][j]=0;
                      }
                  }
                }
                else 6if(arr[i][j]==2)
                    arr[i][j]=1;
                else if(arr[i][j]==0)
                    arr[i][j]=3;
                else if(arr[i][j]==3)
                    arr[i][j]=2;
            }
        }
        printarr(arr,m,n);
        cout<<endl;
        temp++;
    }
}
int main()
{
    int m=3,n=3,t=3;
    cin>>m>>n>>t;
    int **arr=new int*[m];
    for(int i=0;i<m;++i)
        arr[i]=new int[n];
    for(int i=0;i<m;++i)
    {
        for(int j=0;j<n;++j)
        {
           arr[i][j]=2;
        }
    }
    arr[1][1]=3;
    printarr(arr,m,n);
    counter(arr,m,n,t);

}
