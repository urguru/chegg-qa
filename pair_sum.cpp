#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of numbers\n";
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }
    int sum;
    cout<<"Enter the sum\n";
    cin>>sum;
set<int> k;

for(int i=0;i<n;++i)
{
   int key=sum-a[i];
            if(k.find(a[key])!=k.end())
            {
                cout<<a[i]<<" "<<key<<endl;
            }
            else
            {
                k.insert(a[i]);
            }
}
for(set<int>::iterator i=k.begin();i!=k.end();++i)
{
    cout<<*i<<" ";
}
}
