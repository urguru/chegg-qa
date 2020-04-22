
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int x=0;
    while(x<t)
    {
        string res="";
        int n;
        cin>>n;
        vector<pair<int,int> > v;
        int a,b;
        for(int i=0;i<n;++i)
        {
            cin>>a>>b;
            pair<int,int> p=make_pair(a,b);
            v.push_back(p);
        }
        sort(v.begin(),v.end());
        int r_end,c_end;
        bool c_assigned=false;
        r_end=v[0].second;
        res+='J';
        for(int i=1;i<v.size();++i)
        {
           if(v[i].first<r_end && v[i].first<c_end && c_assigned!=false)
           {
               res="IMPOSSIBLE";
               break;
           }
           else if(v[i].first>=r_end)
           {
               res+='J';
               r_end=v[i].second;
           }
           else if(v[i].first>=c_end && c_assigned)
           {
               res+='C';
               c_end=v[i].second;
           }
           else
           {
               res+='C';
               c_end=v[i].second;
               c_assigned=true;
           }
        }
        cout<<"Case #"<<++x<<": "<<res<<endl;
    }
    return 0;
}
