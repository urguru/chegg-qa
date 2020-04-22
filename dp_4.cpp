#include <iostream>
using namespace std;


int main()
{
    int denoms[]={1,2,5,10,20,50,100,200,500,2000};
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int c=0;
	    while(n)
	    {
	        for(int i=9;i>=0;--i)
	        {
	            if((n/denoms[i])>=1)
	            {
	                c+=n/denoms[i];
	                n=n%denoms[i];
	            }
	        }
	    }
	    cout<<c<<endl;
	}

	return 0;
}
