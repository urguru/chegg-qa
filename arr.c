#include<stdio.h>
int main()
{
    //Declare three arrays
    float arr[10],rev[10],avg[10];
    int i;
    //Take the iinput
    for(i=0;i<10;++i)
    {
        printf("Enter array element #%d: ",(i+1));
        scanf("%f",&arr[i]);
    }
    //Store the reverse array and calculate the values for the average array
    for(i=0;i<10;++i)
    {
        rev[i]=arr[9-i];
        avg[i]=(rev[i]+arr[i])/2;
    }
    //Print all the values
    //WE use the format specifier %g for avoiding trailing zeros
    printf("The original array...\n");
    for(i=0;i<10;++i)
    {
        printf("%g\t",arr[i]);
    }
    printf("\nThe reverse array...\n");
    for(i=0;i<10;++i)
    {
        printf("%g\t",rev[i]);
    }
    printf("\nThe average array...\n");
    for(i=0;i<10;++i)
    {
        printf("%g\t",avg[i]);
    }

}
