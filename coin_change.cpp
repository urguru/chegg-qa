long getWays(int n, vector<long> c)
{
    int m=c.size();
    int arr[n+1][m];
    for(int i=0;i<m;++i)
        arr[0][i]=1;
    for(int i=1;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            int x=i-c[j]>=0?arr[i-c[j]][j]:0;
            int y=j>=1?arr[i][j-1]:0;
            arr[i][j]=x+y;
        }
    }
    return arr[n][m-1];
}
