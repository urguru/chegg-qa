#include<stdio.h>
void printSet(int B[],int n)
{
    int i;
    printf("{ ");
    for(i=0;i<n;++i)
    {
        printf("%d ",B[i]);
    }
    printf("}\n");
}
void printSubsets(int B[],int n,int k,int i)
{
    int x;
    if(i==k)
    {
        printSet(B,k);
        return ;
    }
    if(i>=n)
    {
        return;
    }
    for(x=0;x<i;++x)
    {
    B[0]=x+1;
    printSubsets(B,n,k,i+1);
    printSubsets(B+1,n-1,k,i);
    }
}
void main()
{
    int n=4;
    int B[n];
    int i=0;
    for(i=0;i<n;++i)
        B[i]=i+1;
    printSubsets(B,n,2,0);
}
