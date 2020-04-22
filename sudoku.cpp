#include<iostream>
using namespace std;
bool find(int grid[9][9],int &row, int &col)
{
    for (row = 0; row < 9; row++)
        for (col = 0; col < 9; col++)
            if (grid[row][col] == 0)
                return true;
    return false;
}
bool fits(int arr[9][9],int i,int j,int val)
{
    if(i>=9 || j>=9)
        return false;
    for(int x=0;x<9;++x)
    {
        if(x!=j)
        if(arr[i][x]==val)
            return false;
    }
    for(int x=0;x<9;++x)
    {
        if(x!=i)
        if(arr[x][j]==val)
            return false;
    }
    int x=i/3;
    int y=j/3;
    for(;x<i/3+3;++x)
    {
        for(;y<j/3+3;++y)
        {
            if(arr[x][y]==val)
            {
                return false;
            }
        }
    }
    return true;
}
bool solve(int arr[9][9])
{
    int r,c;
    if(!find(arr,r,c))
        return true;
    for(int num=1;num<=9;num++)
    {
        if(fits(arr,r,c,num))
        {
            cout<<r<<" "<<c<<" "<<num<<endl;
            arr[r][c]=num;
            if(solve(arr))
                return true;
            arr[r][c]=0;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int arr[9][9];
        for(int i=0;i<9;++i)
        {
            for(int j=0;j<9;++j)
            {
                cin>>arr[i][j];
            }
        }
        cout<<solve(arr);
        for(int i=0;i<9;++i)
        {
            for(int j=0;j<9;++j)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
