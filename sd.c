#include<stdio.h>
#include<math.h>
double getSD(double arr[],int size)
{
    int i;
    double avg=0,variance=0,sd;
    for(i=0;i<size;++i)
    {
        avg+=arr[i];
    }
    avg=avg/size;
    for(i=0;i<size;++i)
    {
        variance+=(arr[i]-avg)*(arr[i]-avg);
    }
    variance=variance/size;
    sd=sqrt(variance);
    return sd;
}
void main()
{
    double arr[100],sd;
    int size=0,i;
    while(size<2)
    {
        printf("Enter array size > 1: ");
        scanf("%d",&size);
        if(size<2)
        {
            printf("Error: Wrong array size!\n");
        }
    }
    for(i=0;i<size;++i)
    {
        printf("Enter value#%d: ",i+1);
        scanf("%lf",&arr[i]);
    }
    sd=getSD(arr,size);
    printf("The SD value for the array is %.2lf",sd);
}
