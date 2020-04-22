#include <bits/stdc++.h>
using namespace std;
int res(int n)
{
    int c=0;
    while(n)
    {
        if(n & 1)
        {
            n--;
        }
        else
        {
            n=n/2;
        }
        c++;
    }
    return c;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    cout<<res(n)<<endl;
	}
}
