#include <bits/stdc++.h>
using namespace std;
void ror(vector<int>& v)
{
    int temp=v[v.size()-1];
    for(int i=v.size()-2;i>=0;--i)
    {
        v[i+1]=v[i];
    }
    v[0]=temp;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> v;
	    for(int i=0;i<n;++i)
	    {
	        int temp;
	        cin>>temp;
	        v.push_back(temp);
	    }
	    for(int i=0;i<n-1;++i)
	    {
	        ror(v);
	        int k=v.size();
	        v.erase(v.begin()+(k-(i+1)));
	    }
	    cout<<v[0]<<endl;
	}
	return 0;
}
