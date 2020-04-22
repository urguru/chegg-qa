#include<bits/stdc++.h>
using namespace std;
bool isHappy(int n)
{
    int t=n;
    while((n>3))
    {
        int temp=n,x=0;
        while(temp>0)
        {
            x=x+(temp%10)*(temp%10);
            temp=temp/10;
        }
        n=x;
        cout<<n<<endl;
        if(n==7)
            return true;
        if(n==4)
            return false;
        if(n/10==0)
            break;
        //if(n==t)
          //  break;
    }
    if(n==1)
    return true;
return false;
}
int main()
{
    for(int i=1;i<10;++i)
    {
        cout<<"test for "<<i<<endl;;
        isHappy(i);
    }
}
