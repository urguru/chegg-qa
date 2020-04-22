#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    int sum=0;
	    for(int i=0;i<n;++i)
	    {
	        cin>>a[i];
	        sum+=a[i];
	    }
	    int half=sum/2;
	    bool table[n+1][half+1];
	     for(int i=0;i<=half;++i)
	        {
	            table[0][i]=false;
	        }
        for(int i=0;i<=n;++i)
        {
            table[i][0]=true;
        }
	    for(int i=1;i<=n;++i)
	    {
	        for(int j=1;j<=half;++j)
	        {
	            if(j<a[i-1])
	            table[i][j]=table[i-1][j];
	            else
	            table[i][j]=table[i-1][j]||table[i-1][j-a[i-1]];
	        }
	    }
	    int i=0;
	    for(i=half;i>=0;--i)
	    {
	        if(table[n][i])
	            break;
	    }

	    int diff=abs(((sum-i)-i));
	    cout<<diff<<endl;
	}
	return 0;
}
