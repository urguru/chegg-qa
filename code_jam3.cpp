
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
        vector<pair<pair<int,int>,int> > v;
        int a,b;
        for(int i=0;i<n;++i)
        {
            cin>>a>>b;
            pair<int,int> x=make_pair(a,b);
            pair<pair<int,int>,int> y=make_pair(x,i);
            v.push_back(y);
        }
        sort(v.begin(),v.end());
        int r_end,c_end;
        bool c_assigned=false;
        r_end=v[0].first.second;
        res+='J';
        for(int i=1;i<v.size();++i)
        {
           if(v[i].first.first<r_end && v[i].first.first<c_end && c_assigned!=false)
           {
               res="IMPOSSIBLE";
               break;
           }
           else if(v[i].first.first>=r_end)
           {
               res+='J';
               r_end=v[i].first.second;
           }
           else if(v[i].first.first>=c_end && c_assigned)
           {
               res+='C';
               c_end=v[i].first.second;
           }
           else
           {
               res+='C';
               c_end=v[i].first.second;
               c_assigned=true;
           }
        }
        if(res!="IMPOSSIBLE")
        {
            string temp=res;
            for(int i=0;i<v.size();++i)
            {
                temp[v[i].second]=res[i];
            }
            res=temp;
        }
        cout<<"Case #"<<++x<<": "<<res<<endl;
    }
    return 0;
}
