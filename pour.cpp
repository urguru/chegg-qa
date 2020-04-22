#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int pour(int from,int to,int d)
{

    int f=from;
    int t=0;

    int step=1;
    while(f!=d && t!=d)
    {
        int temp=min(f,to-t);
            t=t+temp;
            f=f-temp;
            step++;

            if(f==d || t==d)
                break;
            if(f==0)
            {
                f=from;
            step++;
            }
            if(t==to)
            {
                t=0;
                step++;
            }

    }
    return step;
}
int minstep(int m,int n,int d)
{
    if(m>n)
        swap(m,n);
    if(d>n)
        return -1;
    if((d%gcd(n,m))!=0)
        return -1;
    return min(pour(m,n,d),pour(n,m,d));
}
int main()
{
    int t;
    int i,j;
    cin>>i>>j;
    cin>>t;
    while(t--)
    {
        int d;
        cin>>d;
        cout<<minstep(i,j,d)<<endl;
    }
    return 0;
}
