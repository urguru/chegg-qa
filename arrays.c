#include<stdio.h>
#define N 10

int main()
{
    int arr[N];
    int max,min,sum,avg;
    int i=0;
    for(i=0;i<N;++i)
    {
        printf("Enter the %d number of the array: ",i+1);
        scanf("%d",&arr[i]);
        printf("You have entered %d\n",arr[i]);
    }
    min=arr[0];
    max=arr[0];
    sum=0;
    avg=0;
    for(i=0;i<N;++i)
    {
        sum=sum+arr[i];
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            arr[i]=min;
        }
    }
    avg=sum/10;
    printf("The maximum number is %d\n",max);
    printf("The minimum number is %d\n",min);
    printf("The average of all the numbers is %d\n",avg);

}
