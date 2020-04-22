#include <iostream>
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
	    if(sum%2!=0)
	    {
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	        sum=sum/2;
	        bool table[n+1][sum+1];
	        for(int i=0;i<=sum;++i)
	        {
	            table[0][i]=false;
	        }
	        for(int i=0;i<=n;++i)
	        {
	            table[i][0]=true;
	        }
	        for(int i=1;i<=n;++i)
	        {
	            for(int j=1;j<=sum;++j)
	            {
	               if(j<a[i-1])
	                table[i][j]=table[i-1][j];
                   else
                    table[i][j]=table[i-1][j]||table[i-1][j-a[i-1]];
	            }
	        }
	        if(table[n][sum])
	        {
	            cout<<"YES"<<endl;
	        }
	        else
	        {
	            cout<<"NO"<<endl;
	        }
	    }
	}
	return 0;
}
