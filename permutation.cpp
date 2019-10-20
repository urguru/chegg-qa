#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
        }
        if(n<=5)
        {
            cout<<1<<endl;
            continue;
        }
        int c=1;
        for(int i=1;i<n;i++)
        {
            int k=i-5;
            while(k<i)
            {
                if(a[k]<=a[i])
                {
                    break;
                }
                else
                {
                    k++;
                }
            }
            if(k==i)
                c++;
        }
        cout<<c<<endl;
    }
}
