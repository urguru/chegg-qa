#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the queensAttack function below.
typedef pair<int,int> pairs;
bool is_valid(int i,int j,int n)
{
    if(i<=0 || i>n || j<=0 || j>n)
        return false;
    return true;
}
bool is_playable(int i,int j,set<pairs> s,int n)
{
    if(!is_valid(i,j,n))
        return false;
    pairs ob=make_pair(i,j);
    if(s.find(ob)==s.end())
        return true;
    return false;
}
int queensAttack(int n, int k, int r_q, int c_q, vector<vector<int> > obstacles)
{
     set<pairs> s;
     for(int i=0;i<obstacles.size();++i)
     {
            pairs p=make_pair(obstacles[i][0],obstacles[i][1]);
            s.insert(p);
     }
     int a[]={1,0,-1};
     int c=0;
     for(int i=0;i<3;++i)
     {
         for(int j=0;j<3;++j)
         {
             if(a[i]==0 && a[j]==0)
                continue;
             else
             {
                 int x=r_q+a[i],y=c_q+a[j];
                 while(is_playable(x,y,s,n))
                 {
                     cout<<x<< "is X and Y is "<<y<<endl;
                    x+=a[i];
                    y+=a[j];
                    c++;
                 }
             }
         }
     }
    return c;
}

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<vector<int> > v(k);
    for(int i=0;i<k;++i)
    {
        vector<int> s;
        int temp;
        cin>>temp;
        s.push_back(temp);
        cin>>temp;
        s.push_back(temp);
    }
    int r_q,c_q;
    cin>>r_q>>c_q;
    int result = queensAttack(n, k, r_q, c_q, v );
    cout<<result;
}

