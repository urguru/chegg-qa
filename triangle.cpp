#include <bits/stdc++.h>
using namespace std;

int main() {
	//code`
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int k=int((n-2)/2);
	    int res=(k*(k+1))/2;
	    cout<<res<<endl;
	}
	return 0;
}
