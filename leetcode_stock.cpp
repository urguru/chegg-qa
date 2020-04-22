#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices)
{
    int present_price=prices[0];
    int profits_made=0;
    cout<<present_price<<endl;
    for(int i=1;i<prices.size();++i)
    {
        if(prices[i]<=present_price)
        {
            present_price=prices[i];
        }
        else
        {
            while(i<prices.size() && (i+1)<prices.size() && prices[i]>present_price && prices[i]<prices[i+1])
            {
                i++;
            }
            if(i!=prices.size())
            {
                cout<<"Present Price="<<present_price<<" Price[i]="<<prices[i]<<endl;;
                profits_made+=prices[i]-present_price;
                present_price=prices[i+1];
                i++;
            }
        }
        cout<<profits_made<<endl;
    }
    return profits_made;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;++i)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
     for(int i=0;i<n;++i)
     {
         cout<<v[i]<<" ";
     }
    cout<<maxProfit(v);
}
