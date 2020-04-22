#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
string res(int b,int n)
{
    int i=0;
    char ans[100000];
    while(n!=0)
    {
       int rem=n%b;
        int quot=int(n/b);
        if(rem<0)
        {
            rem=-1*b+rem;
            quot++;
        }
        n=quot;
        ans[i]=('0'+rem);
        i++;
    }
    char real_ans[100000];
    int j=0;
    for(j=0;i>=0;++j)
    {
        real_ans[j]=ans[--i];
    }
    real_ans[j]='\0';
    cout<<real_ans;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int b,n;
    cin>>b>>n;

    res(b,n);
    return 0;
}

