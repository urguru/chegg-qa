#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  int count1=0;
  while(t--)
  {
    string s;
    cin>>s;
    int i=0;
    string res;
    while(i<s.size())
    {
      char a=s[i];
      int count=a-'0';
      int x=count,k=0;
      while(x--)
      {res+="(";
       k++;
      }
      while(s[i]==a)
      {
        res+=s[i];
        i++;
      }
      x=count;
      while(x--)
      {
        k++;
        res+=")";
      }
    }
    cout<<"Case #"<<++count1<<": "<<res<<endl;
  }
}
