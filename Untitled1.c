#include<stdio.h>
void main()
{
    int subject[100],i,total=0,subs;
    float average;
    printf("How many subjects do you have\n");
    scanf("%d",&subs);
    printf("Enter the marks in %d subjects one by one\n",subs);
    for(i=0;i<subs;++i)
    {
        scanf("%d",&subject[i]);
        total+=subject[i];
    }
    average=total/5.0;
    printf("The total marks is %d\n",total);
    printf("The average is %f\n",average);
}
