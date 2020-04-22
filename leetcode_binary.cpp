#include<bits/stdc++.h>
using namespace std;
int numSteps(string s) {
        int step_count=0;
        reverse(s.begin(),s.end());
        for(int i=0;i<s.size()-1;++i)
        {
            if(s[i]=='0')
            {
                step_count++;
            }
            else
            {
                int j=i+1;
                while(j<s.size()-1 && s[j]!='0')
                {
                    s[j]='0';
                    j++;
                }
                if(j==(s.size()-1))
                {
                    s[j]='0';
                    s=s+'1';
                    s[i]='0';
                }
                else
                {
                    s[j]='1';
                    s[i]='0';
                }
                step_count+=2;
            }
            cout<<s<<" "<<s.size()<<" "<<step_count<<endl;
        }
        return step_count;
    }
int main()
{
    cout<<numSteps("1101");
    return 0;
}
