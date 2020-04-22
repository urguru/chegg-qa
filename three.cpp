#include <bits/stdc++.h>
using namespace std;
void calc_primes(bool primes[],int n)
{
    primes[0]=false;
    primes[1]=false;
    for(int i=2;i<=(int)sqrt(n);++i)
    {
        int k=2*i;
        while(k<=n)
        {
            primes[k]=false;
            k=k+i;
        }
    }
}
int main() {
    bool hey=true;
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    bool primes[n+1];
	    memset(primes,true,sizeof(primes));
	    calc_primes(primes,n+1);
	    int c=0;
        for(int i=4;i<=n;++i)
        {
            if(((sqrt(i))-(int)sqrt(i)==0)&& primes[(int)(sqrt(i))])
               {
                   c++;
               }
        }
        cout<<c<<endl;
	}
	return 0;
}
