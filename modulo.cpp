#include <bits/stdc++.h>
using namespace std;
int results(vector<int> s,int m,int n)
{
   if(n>m)
    return 1;
    bool values[m];
    memset(values,0,sizeof(values));
    for(int i=0;i<n;++i)
    {
        if(values[0]==1)
        return 1;

        bool temp[m];
        memset(temp,0,sizeof(temp));
        for(int j=0;j<m;++j)
        {
            if(values[j]==1)
            {
                temp[(j+s[i])%m]=1;
            }
        }
        for(int x=0;x<m;++x)
        {
            if(temp[x]==1)
                values[x]=1;
        }
        values[s[i]%m]=1;
    }
     for(int k=0;k<m;++k)
        cout<<values[k]<< " ";
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    vector<int> s(n);
	    for(int i=0;i<n;++i)
	    {
	        int temp;
	        cin>>temp;
	        s[i]=temp;
	    }
	    cout<<results(s,m,n)<<endl;
	}
	return 0;
}
