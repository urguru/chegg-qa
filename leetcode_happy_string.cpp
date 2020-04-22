#include<bits/stdc++.h>
using namespace std;
string longestDiverseString(int a, int b, int c)
{
    vector<pair<int,char> >v;
    pair<int,char> p=make_pair(a,'a');
    pair<int,char> q=make_pair(b,'b');
    pair<int,char> r=make_pair(c,'c');
    v.push_back(p);
    v.push_back(q);
    v.push_back(r);
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
     cout<<v[0].second<<" "<<v[1].second<<" "<<v[2].second<<endl;
    if(v[0].first>2 && v[1].first==0 && v[2].first==0)
        return "";
    if(v[0].first==v[1].first && v[1].first==v[2].first)
    {
        string s="";
        for(int i=0;i<a;++i)
        {
            s+="abc";
        }
        return s;
    }
    if(v[0].first==(v[1].first+v[2].first))
    {
        string s="";
        int y=v[1].first;
        int z=v[2].first;
        while(y)
        {
           s+=v[0].second;
           s+=v[1].second;
           y--;
        }
        while(z)
        {
           s+=v[0].second;
           s+=v[2].second;
           z--;
        }
        return s;
    }
    if(v[0].first>(v[1].first+v[2].first))
    {
        string s="";

        int x=v[0].first;
        int y=v[1].first;
        int z=v[2].first;
        while(x>(y+z) && x>0 && y>0 && z>0)
        {
            cout<<x<<" "<<y<<" "<<z<<endl;
            if(x>1 && y>0)
            {
                s=s+v[0].second+v[0].second+v[1].second;
                y--;
                x=x-2;
            }
            if(x>1 && z>0)
            {
                s=s+v[0].second+v[0].second+v[2].second;
                z--;
                x=x-2;
            }
        }
        while(x && ( y || z))
        {
            cout<<x<<" "<<y<<" "<<z<<endl;
            if(x>0)
            {
                if(x==1)
                {
                    s=s+v[0].second;
                    x=x-1;
                }
                else
                {
                    s=s+v[0].second+v[0].second;
                    x=x-2;
                }
            }
            if(y)
            {
                if(y>1)
                {
                    x+2<2*y?s=s+v[1].second+v[1].second:s=s+v[1].second;
                    x+2<2*y?y=y-2:y=y-1;
                }
                else
                {
                    s=s+v[1].second;
                    y--;
                }
            }
            if(z)
            {
                s=s+v[2].second;
                z--;
            }
        }
        if(y==0)
        {
            cout<<"Hello";
            while(x && z)
            {
                s=s+v[0].second+v[2].second;
                x--;
                z--;
            }
        }
        if(z==0)
        {
            cout<<x<<" "<<y<<" "<<z<<endl;
            while(x && y)
            {
                s=s+v[0].second+v[1].second;
                x--;
                y--;

            }
        }
        x>1?s=s+v[0].second+v[0].second:(x>0?s=s+v[0].second:s=s);
        if(y)
            {
                if(y>1)
                {
                    x+2<2*y?s=s+v[1].second+v[1].second:s=s+v[1].second;
                    x+2<2*y?y=y-2:y=y-1;
                }
                else
                {
                    s=s+v[1].second;
                    y--;
                }
            }
        return s;
    }
    else
    {
        string s="";
        int x=v[0].first;
        int y=v[1].first;
        int z=v[2].first;
        while(x && ( y || z))
        {
            //cout<<x<<" "<<y<<" "<<z<<endl;
            if(x)
            {
                s=s+v[0].second;
                x=x-1;
            }
            if(y)
            {
                s=s+v[1].second;
                y--;
            }
            if(z)
            {
                s=s+v[2].second;
                z--;
            }
        }
        x>1?s=s+v[0].second+v[0].second:(x>0?s=s+v[0].second:s=s);
        return s;
    }
}
int main()
{
    cout<<longestDiverseString(21,3,12);
}
