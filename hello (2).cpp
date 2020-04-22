#include<iostream>
using namespace std;
void numbers(int n[],int& l)
{
    if(l<=1)
    {

    }
    else
    {
        int temp=l/2;
        int temp2=l-l/2;
        numbers(n,temp);
        numbers(n+l/2,temp2);
        for(int i=0;i<l/2;++i)
        {
            cout<<n[i]<<" ";
        }
        cout<<"X ";
        for(int i=l/2;i<l;++i)
        {
            cout<<n[i]<<" ";
        }
        cout<<" = ";
        if(l<=2)
        {
            int t1,t2;
            t1=max(n[0],n[1]);
            t2=min(n[0],n[1]);
            n[0]=t1;
            n[1]=t2;
            cout<<n[0]<<" "<<n[1]<<endl;
        }
        else
        {
            if(n[0]>n[l/2])
            {
                int temp=n[l/2];
                for(int i=l/2;i>0;--i)
                {
                    n[i]=n[i-1];
                }
                n[1]=temp;
            }
            else
            {
                int temp=n[0];
                n[0]=n[l/2];
                for(int i=2;i<l/2+1;++i)
                {
                    n[i]=n[l/2+i-1];
                }
                n[1]=temp;
            }
            for(int i=0;i<l/2+1;++i)
            {
                cout<<n[i]<<" ";
            }
            cout<<endl;
        }
    }

   /* numbers(n,l/2);
    numbers(n+l/2,l-l/2);
    cout<<n[0]<<" X "<<n[1]<<endl;*/

}
int main()
{
    int a[]={2,3,1,4,5,0,7};
    int l=7;
    numbers(a,l);
    return 0;
}
