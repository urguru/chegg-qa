#include <bits/stdc++.h>
using namespace std;

int main() {
	    int t;
	    cin>>t;
	    while(t--)
	    {
	        int n,w;
	        cin>>n>>w;
	        int val[n],wt[n];
	        for(int i=0;i<n;++i)
	        {
	            cin>>val[i];
	        }
	        for(int i=0;i<n;++i)
	        {
	            cin>>wt[i];
	        }
	        int value[n+1][w+1];
	        for(int i=0;i<=n;++i)
	        {
	            for(int j=0;j<=w;++j)
	            {
	               // Base case
	                if(i==0 || j==0)
	                {
	                    value[i][j]=0;
	                }
	                else if(wt[i-1]<=j)
	                {
	                    value[i][j]=max((val[i-1]+value[i-1][j-wt[i-1]]),value[i-1][j]);
	                }
	                else
	                {
	                    value[i][j]=value[i-1][j];
	                }
	            }
	        }
	        cout<<value[n][w]<<endl;
	    }
}
