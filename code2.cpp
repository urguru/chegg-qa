#include <iostream>
using namespace std;

long long int fact(long long int a)
{
    if(a==0 || a==1)
    return 1;
    return a*fact(a-1);
}
int main() {
	// your code goes here
	long long int n,a,b,ans=0;
	cin>>n;
	while(n--)
	{
	    cin>>a>>b;
	    ans=0;
	    long long int x=1;
	    for(long long int i=a-1;i>a-b;--i)
	    x=x*i;
	    ans+=x/fact(b-1);
	    cout<<ans<<endl;
	}
	return 0;
}

