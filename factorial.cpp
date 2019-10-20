//This program calculates the factorial of a number using arrays
#include<iostream>
using namespace std;
int main()
{
    //n holds the number,res array is used for storing the result integer
    //k tells us the number of digits in the number and carry is used for storing the carry value
    int n,res[100000],carry=0,k=1;
    cout<<"Enter any number\n";
    cin>>n;
    res[0]=1;
    //So we go over all the numbers from one to the nth number and then multiply it with the result array
    for(int i=1;i<=n;++i)
    {
        //j is used for indexing the res array indexes so if j is 0 then its units place,if its 1 then its tens place and so on
        int j=0;
        //So as long as we have digits in our number we multiply it with the i value
        //Then we store the carry and then just keep the remainder in the res array
        //So in the next digits place we add the carry and then do the same thing again
        while(j<k)
        {
            res[j]=res[j]*i+carry;
            carry=res[j]/10;
            res[j]=res[j]%10;
            j++;
        }
        //Even after the end i the carry isnt zero we add it to the res array and then increase the value of k too
        if(carry>0)
        {
            while(carry>0)
            {
                res[k]=carry%10;
                carry=carry/10;
                k++;
            }
        }
    }
    //We finally print the number by printing the array in reverse order
    for(int i=k-1;i>=0;i--)
    {
        cout<<res[i];
    }
}
