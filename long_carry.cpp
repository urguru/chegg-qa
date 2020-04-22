#include <bits/stdc++.h>

using namespace std;

// Complete the extraLongFactorials function below.
void extraLongFactorials(int n) {
    vector<int> res;
    int carry=0;
    res.push_back(1);
    for(int i=2;i<=n;++i)
    {
        for(int j=0;j<res.size();++j)
        {
            if(i==5)
                cout<<res[j]<<" i="<<i<<"carry= "<<carry<<endl;
            res[j]=res[j]*i+carry;

            carry=res[j]/10;
            res[j]=res[j]%10;
        }
        while(carry>0)
        {
            res.push_back(carry%10);
            carry=carry/10;
        }
    }
    for(int i=res.size()-1;i>=0;--i)
    cout<<res[i]<<" ";

}

int main()
{
    int n;
    cin >> n;
    extraLongFactorials(n);

    return 0;
}

