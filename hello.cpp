#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    int k;
    cin>>n>>k;
    int d=floor(sqrt(k*2));
    cout<<"The number of turns is "<<d<<endl;
    int c_r=k-(d*(d+1))/2;
    int rem=d%n;
    cout<<rem<<" is the remainder\n";
    int resul[n+1];
    cout<<"Chocolates remaining is "<<c_r;
    for(int i=1;i<=n;++i)
    {
        resul[i]=0;
        int this_no=1*(d/n)+(i<=rem?1:0);
        int res=this_no*i+n*((this_no*(this_no-1))/2);
        if(i==5)
            cout<<"Result is "<<res;
        resul[i]=res;
    }
    if ((d+1)%n==0)
    {
        resul[d+1]+=c_r;
    }
    else
        resul[(d+1)%n]+=c_r;
    for(int i=1;i<=n;++i)
    {
        cout<<resul[i]<<" ";
    }
}
