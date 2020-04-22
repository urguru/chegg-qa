#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    string st1,st2;
	    cin>>st1>>st2;
	    int arr[a+1][b+1];
	    for(int i=0;i<=a;++i)
	    {
	        for(int j=0;j<=b;++j)
	        {
	            if(i==0 ||j==0)
                {
                    arr[i][j]=0;
                }
	            else if(st1[i-1]==st2[j-1])
	            {
	                arr[i][j]=arr[i-1][j-1]+1;
	            }
	            else
	            {
	                arr[i][j]=max(arr[i][j-1],arr[i-1][j]);
	            }
	        }
	    }
	    cout<<arr[a][b]<<endl;
	}
	return 0;
}
