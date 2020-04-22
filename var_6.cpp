#include<bits/stdc++.h>
#include <string>
using namespace std;
int get_ans(int a,int b,char c)
{
    if(c=='*')
        return a*b;
    if(c=='+')
        return a+b;
    if(c=='-')
        return a-b;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int arr[11];
    char str[10];
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
        cin>>str[i];
    }
    cin>>arr[n];
    n=n+1;
    int res[n][n];
    string resStr[n][n];
    memset(res,0,sizeof(res));
    for(int i=0;i<n;++i)
    {
        res[i][i]=arr[i];
        ostringstream convert;
        convert<<arr[i];
        resStr[i][i]+=convert.str();
       // if(i!=n-1)
         //   res[i][i+1]=get_ans(arr[i],arr[i+1],str[i]);
    }
    for(int L=1;L<n;++L)
    {
        for(int i=0;i<=n-L-1;++i)
        {
            int j=i+L;
            res[i][j]=INT_MIN;
            for(int k=0;k<j;++k)
            {
                int temp=get_ans(res[i][k],res[k+1][j],str[k]);
                if(temp>res[i][j])
                {
                    res[i][j]=temp;
                    resStr[i][j]='('+resStr[i][k]+str[k]+resStr[k+1][j]+')';
                }
            }
        }
    }
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            cout<<resStr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

