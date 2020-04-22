#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool isPrime(int n)
{
    for(int i=2;i<=sqrt(n);++i)
        if(n%i==0)
            return false;
    return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int k=2;
    int res=1;
    while(n!=1)
    {
        cout<<k<<endl;
        if(isPrime(k) && n!=1)
        {
            while(n%k==0 && n!=1)
            {
                k>=5?res=res*2:res=res*k;
                n=n/k;
                cout<<res<<endl;
            }
        }
        k++;
    }
    cout<<res;
    return 0;
}

