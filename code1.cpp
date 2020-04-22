#include <bits/stdc++.h>
using namespace std;
map<long long int,long long int> m;
long long int solution(long long int n)
{
    if(n<=4)
        return n;
    if(m[n]) return m[n];
    else
    {
        m[n]=(solution((long long int)(n/2))+solution((long long int)(n/3))+solution((long long int)(n/4)));
        return m[n];
    }
}
int main() {
	// your code goes here

	long long int n;
	while(cin>>n)
	cout<<solution(n);
	return 0;
}

