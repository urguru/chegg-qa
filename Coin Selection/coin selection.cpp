

#include <bits/stdc++.h>
using namespace std;

int CoinGame(int* arr, int n)
{
    // Create a table to store solutions of subproblems
    //First Initialize them to zero
    int table[n][n];
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
        table[i][j]=0;
        }
    }

    // Fill table using above recursive formula. Note
    // that the table is filled diagonally
    for (int gap = 0; gap < n; ++gap) {
        for (int i = 0, j = gap; j < n; ++i, ++j) {

            // Here x is value of F(i+2, j), y is F(i+1, j-1) and
            // z is F(i, j-2) in above recursive formula
            //The other conditions are to check if the values exist or else they are zero
            int x = ((i + 2) <= j) ? table[i + 2][j] : 0;
            int y = ((i + 1) <= (j - 1)) ? table[i + 1][j - 1] : 0;
            int z = (i <= (j - 2)) ? table[i][j - 2] : 0;

            table[i][j] = max(arr[i] + min(x, y), arr[j] + min(y, z));
        }
    }
    //Prints the table
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }
    return table[0][n - 1];
}
int main()
{
    int arr1[] = { 3,9,1,2 };
    int n = sizeof(arr1) / sizeof(arr1[0]);
    printf("%d\n", CoinGame(arr1, n));


    return 0;
}
