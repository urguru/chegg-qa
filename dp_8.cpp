#include<bits/stdc++.h>
using namespace std;

const int maximum=1000;

int min(int x,int y,int z)
{
    return min(x,min(y,z));
}
int editDist(string s1,string s2,int m,int n,int dp[][maximum])
{
    if(m==0)
        return n;
    if(n==0)
        return m;
    if(dp[m-1][n-1]!=-1)
        return dp[m-1][n-1];

    if(s1[m-1]==s2[n-1])
        return dp[m-1][n-1]=editDist(s1,s2,m-1,n-1,dp);

    return dp[m-1][n-1]=1+min(editDist(s1,s2,m,n-1,dp),editDist(s1,s2,m-1,n,dp),editDist(s1,s2,m-1,n-1,dp));
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        string s1,s2;
        cin>>s1>>s2;
        int dp[m][maximum];
        memset(dp,-1,sizeof(dp));
        cout<<editDist(s1,s2,m,n,dp)<<endl;
    }
}
