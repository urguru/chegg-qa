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
	    for(int i=0;i<n;++i)
	    {
	        cin>>a[i];
	    }
	    int lis[n];
	    for(int i=0;i<n;++i){lis[i]=1;}
	    for(int i=1;i<n;++i)
	    {
	        for(int j=0;j<i;++j)
	        {
	            if(a[j]<a[i] && lis[i]<lis[j]+1)
	            {
	                lis[i]=lis[j]+1;
	            }
	        }
	    }
	    int maximum=lis[0];
	    for(int i=1;i<n;++i)
	    {
	        maximum=max(maximum,lis[i]);
	    }
	    cout<<maximum<<endl;
	}
	return 0;
}
