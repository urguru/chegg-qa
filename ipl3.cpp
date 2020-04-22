#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,word;
        cin>>a>>word;
        int len=word.size()
        size_t found = str.find(c);
        if (found != string::npos)
        {
            cout<<-1<<endl;
            break;
        }
        else if(found==0 || found==len-1)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<pow(2,len-1)-1<<endl;
        }
    }
    return 0;
}

