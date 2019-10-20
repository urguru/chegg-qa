//The %.g is used while prinitng so that there are no trailing zeroes for double numbers
#include<stdio.h>
void function1(int *a,int *b,int *c)
{
    int x[3]={*a,*b,*c},i=0,j=0;
    for(i=0;i<3;++i)
    {
        for(j=i;j<3;++j)
        {
            if(x[i]>x[j])
            {
                int temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }
    *a=x[0];
    *b=x[1];
    *c=x[2];
}
void function2(double arr[],int size,double *sum_of_squares)
{
    int i;
    for(i=0;i<size;++i)
    {
        sum_of_squares[i]=arr[i]*arr[i];
    }
}
double function3(double arr[],int size,double *sum_of_squares)
{
    int i;
    double avg=0;
    for(i=0;i<size;++i)
    {
        avg+=arr[i];
    }
    avg=avg/10;
    for(i=0;i<size;++i)
    {
        sum_of_squares[i]-=avg;
    }
    return avg;
}
double function4(double arr[],int size)
{
    int i;
    double sum_of_squares[10],variance=0,average=0;
    average=function3(arr,size,sum_of_squares);
    function2(arr,size,sum_of_squares);
    for(i=0;i<size;++i)
    {
        variance+=sum_of_squares[i];
    }
    variance=variance/(size-1);
    printf("\nThe average of 10 numbers is %g",average);
    return variance;
}
void main()
{
    int a,b,c,i;
    double arr[10],sum_of_squares[10],variance;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("The three numbers you have entered are %d %d %d\n",a,b,c);
    function1(&a,&b,&c);
    printf("The three numbers in increasing order are %d %d %d\n",a,b,c);
     printf("Enter ten numbers for the array\n");
    for(i=0;i<10;++i)
    {
        scanf("%lf",&arr[i]);
    }
    printf("The ten numbers you have entered are \n");
    for(i=0;i<10;++i)
    {
       printf("%g ",arr[i]);
    }
    variance=function4(arr,10);
    printf("\nThe variance is %g",variance);
}
