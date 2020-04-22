#include <bits/stdc++.h>
using namespace std;
int nonDivisibleSubset(int k, vector<int> s) {
    int values[k];
    memset(values,0,sizeof(values));
    for(int i=0;i<s.size();++i)
        values[s[i]%k]++;
    int res=0;
    res=res+min(values[0],1);
    if(k%2==0)
    res=res+min(values[k/2],1);
    for(int i=1;i<=k/2 && k%2!=0;++i)
    res=res+max(values[i],values[k-i]);
    for(int i=1;i<k/2 && k%2==0;++i)
    res=res+max(values[i],values[k-i]);
    return res;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    vector<int> s;
	    for(int i=0;i<n;++i)
	    {
	        int temp;
	        cin>>temp;
	        s.push_back(temp);
	    }
	    int res=nonDivisibleSubset(k,s);
	    cout<<res<<endl;
	}
	return 0;
}
