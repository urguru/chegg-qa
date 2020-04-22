#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int x=0;
    while(x<t)
    {
        int n;
        cin>>n;
        int arr[n][n];
        int diag_sum=0;
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<n;++j)
            {
                cin>>arr[i][j];
            }
            diag_sum+=arr[i][i];
        }
        int row_c=0,col_c=0;
        for(int i=0;i<n;++i)
        {
            int check[n];
            memset(check,0,sizeof(check));
            for(int j=0;j<n;++j)
            {
                check[arr[i][j]-1]+=1;
                if(check[arr[i][j]-1]>1)
                {
                    row_c++;
                    break;
                }
            }
        }
        for(int i=0;i<n;++i)
        {S
            int check[n];
            memset(check,0,sizeof(check));
            for(int j=0;j<n;++j)
            {
                check[arr[j][i]-1]+=1;
                if(check[arr[j][i]-1]>1)
                {
                    col_c++;
                    break;
                }
            }
        }
        cout<<"Case #"<<++x<<": "<<diag_sum<<" "<<row_c<<" "<<col_c<<endl;
    }
    return 0;
}
