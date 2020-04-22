#include <iostream>
using namespace std;

int main() {
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
        int sum[n];
        for(int i=0;i<n;++i)
        {
            sum[i]=a[i];
        }
        for(int i=1;i<n;++i)
        {
            for(int j=0;j<i;++j)
            {
                if(a[j]<a[i] && sum[j]+a[i]>sum[i])
                {
                    sum[i]=sum[j]+a[i];
                }
            }
        }
        int maximum=sum[0];
        for(int i=0;i<n;++i)
        {
            cout<<sum[i]<<" ";
        }
        cout<<endl;
        for(int i=1;i<n;++i)
        {
            maximum=max(maximum,sum[i]);
        }
        cout<<maximum<<endl;
    }
}
