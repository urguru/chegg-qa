#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int res(string f,string r,int k,int i)
{
    if(f.size()==k)
        return 0;
    if(f==r)
        return k;
    else
    {
            int a,b,ans;
            a=res(f,r,k+1,i+1);

            swap(f[i],f[f.size()-1]);
            b=res(f,r,k+1,i+1);
            ans=max(ans,max(a,b));
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string e,p;
    cin>>e>>p;
    cout<<res(e,p,0,0);
    return 0;
}

