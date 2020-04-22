#include<iostream>
using namespace std;
bool yes=false;
bool isSafe(int val[],int r,int c,int n)
{
    for(int i=0;i<r;++i)
    {
        if(val[i]==c)
        return false;
    }
    int  i,j;
    for(i=r-1,j=c-1;i>=0 && j>=0;--i,--j)
    {
        if(val[i]==j)
        return false;
    }
    for(int i=r-1,j=c+1;i>=0 && j<n;--i,++j)
    {
        if(val[i]==j)
        return false;
    }
    return true;
}
void solve(int place[],int n,int row)
{
    if(row>n)
        return;
    if(row==n)
    {
        yes=true;
        cout<<"[ ";
        for(int i=0;i<n;++i)
        {
            cout<<place[i]+1<<" ";
        }
        cout<<"] ";
        return;
    }
    for(int i=0;i<n;++i)
    {
        if(isSafe(place,row,i,n))
        {
            place[row]=i;
            solve(place,n,row+1);
        }
    }
}
void nqueens(int n)
{
    int place[n];
    for(int i=0;i<n;++i)
    {
        place[i]=0;
    }
    solve(place,n,0);
    if(yes==false)
        cout<<"-1";
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    yes=false;
	    int n;
	    cin>>n;
	    nqueens(n);
	    cout<<endl;
	}
	return 0;
}
[1 3 6 8 2 4 9 7 5 ] [1 3 7 2 8 5 9 4 6 ]
[ 1 3 6 8 2 4 9 7 5 ][ 1 3 7 2 8 5 9 4 6 ]
