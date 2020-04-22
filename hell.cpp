#include<bits/stdc++.h>
#include <string>
using namespace std;
bool isOperator(char op)
{
    return (op == '+' || op == '*'||op=='-');
}
int get_ans(int a,int b,char c)
{
    if(c=='*')
        return a*b;
    if(c=='+')
        return a+b;
    if(c=='-')
        return a-b;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int arr[11];
    char str[10];
    int n=0;
    string exp;
    cin>>exp;
    string tmp = "";

    //  store operator and numbers in different vectors
    for (int i = 0; i < exp.length(); i++)
    {
        if (isOperator(exp[i]))
        {
            str[n]=exp[i];
            arr[n]=atoi(tmp.c_str());
            tmp = "";
            n++;
        }
        else
        {
            tmp += exp[i];
        }
    }

    arr[n++]=atoi(tmp.c_str());
    int res[n][n];
    string resStr[n][n];
    memset(res,0,sizeof(res));
    for(int i=0;i<n;++i)
        cout<<arr[i]<<" ";
    for(int i=0;i<n-1;++i)
        cout<<str[i]<<" ";
    for(int i=0;i<n;++i)
    {
        res[i][i]=arr[i];
        ostringstream convert;
        convert<<arr[i];
        resStr[i][i]+=convert.str();
       // if(i!=n-1)
         //   res[i][i+1]=get_ans(arr[i],arr[i+1],str[i]);
    }
    for(int L=1;L<n;++L)
    {
        for(int i=0;i<=n-L-1;++i)
        {
            int j=i+L;
            res[i][j]=INT_MIN;
            for(int k=i;k<j;++k)
            {
                int temp=get_ans(res[i][k],res[k+1][j],str[k]);
                if(temp>=res[i][j])
                {
                    res[i][j]=temp;
                    resStr[i][j]='('+resStr[i][k]+str[k]+resStr[k+1][j]+')';
                }
            }
        }
    }
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            cout<<resStr[i][j]<<" ";
        }
        cout<<endl;
    }
   cout<<resStr[0][n-1];
    return 0;
}


