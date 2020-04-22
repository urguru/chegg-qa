#include<bits/stdc++.h>
using namespace std;
void printSolution(int path[],int n)
{
    cout<<"[";
    for (int i=0;i<n-1;i++)
        cout << path[i]+1 <<", ";
    cout<<path[n-1]+1<<"]";
}
bool isSafe(int v,bool* arr[],int path[],int pos)
{
    if(arr[path[pos-1]][v]==0)
        return false;
    for (int i=0;i<pos;i++)
        if (path[i]==v)
            return false;
    return true;
}
bool isCycleUtil(bool* arr[],int path[],int pos,int n)
{
    if(pos==n)
    {
        printSolution(path,n);
        if (arr[path[pos - 1]][path[0]] == 1)
            return true;
        else
            return false;
    }
    for(int v=1;v<n;v++)
    {
        if (isSafe(v, arr, path, pos))
        {
            path[pos] = v;
            if (isCycleUtil (arr, path, pos + 1,n) == true)
                return true;
            path[pos] = -1;
        }
    }
    return false;
}
bool isCycle(bool* arr[],int n)
{
    int *path = new int[n];
    for (int i = 0; i<n; i++)
        path[i] = -1;
    for(int i=0;i<n;++i)
    {  for (int k = 0; k<n; k++)
            path[k] = -1;
        path[0] = i;
        if (isCycleUtil(arr,path,i+1%n,n)==false )
        {
            cout<<-1;
        }
        printSolution(path,n);
        //return true;
    }
}
void func(int n)
{
    bool** arr=new bool*[n];
    for(int i=0;i<n;++i)
        arr[i]=new bool[n];
    for(int i=1;i<=n;++i)
        for(int j=1;j<=n;++j)
            if((sqrt(i+j)-floor(sqrt(i+j)))==0)
               arr[i-1][j-1]=1;
            else
                arr[i-1][j-1]=0;
    isCycle(arr,n);
}
int main()
{
    int n;
    cin>>n;
    func(n);
    return 0;
}
