#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int> lst;
int k=1;
while(k!=0)
{
    cin>>k;
    lst.push_back(k);
}
sort(lst.begin(),lst.end());
vector<int>::iterator it=lst.begin();
while(it!=lst.end())
{
        int temp=*it;
        while(temp==*(++it))
        {
            *it=0;
        }
}
for(int i=0;i<lst.size();++i)
{
    lst.at(i)!=0?cout<<lst.at(i):cout<<"";
}
}
