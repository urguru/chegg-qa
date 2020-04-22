#include<iostream>
using namespace std;
int findSplit(int arr[],int n)
{
    //S holds the total sum of the array
    int S=0;
    //a and b will be the first and the second index
    int a=-1,b=-1;
    int prefixSum=0;
    for(int i=0;i<n;++i)
    {
        S+=arr[i];
    }
    //If the total sum cannot be divided into three parts then we return 0
    if(S%3!=0)
    {
        return 0;
    }
    //We calculate the first and the second prefix sum
    int S1,S2;
    S1=S/3;
    S2=2*S1;
    for(int i=0;i<n;++i)
    {
        prefixSum+=arr[i];
        //We check if the prefix sum is equal to S1 and still a has not been set then we set a to the first index value
        if((prefixSum%S1==0) && prefixSum!=0 && a==-1)
        {
            a=i;
        }
        //Then we set the second index value
        else if(prefixSum%S2==0 && prefixSum!=0)
        {
            b=i;
            break;
        }
    }
    //If we dont find two indexes then we return 0 else we print the result
    if(a!=-1 && b!=-1)
    {
        cout <<"("<<a<< ", "<<b<<")";
        return 1;
    }
    return 0;
}
int main()
{
    int total_number;
    cin>>total_number;
    int* arr=new int[total_number];
    for(int i=0;i<total_number;++i)
    {
        cin>>arr[i];
    }
    if(findSplit(arr,total_number)==0)
    {
        cout<<"-1";
    }
    return 0;
}
