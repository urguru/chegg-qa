#include<stdio.h>
//This function converts the given number into a binary equivalent using recursion
void convert2binary(int n,int size)
{
    //We use the remainder value to store 1 or 0 which is to be printed at the end
    int rem;
    //When we have totally printed the number and if we still want to add zeroes in the beginning we use the while loop inside
    if(n==0)
        {
            while(--size)
            {
                printf("0");
            }
        }
    else
        {
            //We traverse till the end of the recursion and then we start printing the remainders one by one
            rem=n%2;
            convert2binary(n/2,size-1);
            printf("%d",rem);
        }
}
//This function recursively calls the convert2binary to print the range of binary representation values
void call_convert_to_binary(int n,int size)
{
    if(n>0)
    {
        printf("%d = ",n);
        convert2binary(n,size);
        printf("\n");
        call_convert_to_binary(n-1,size);
    }
}
int main()
{
    int n,size;
    printf("Enter the number whose binary representation you want\n");
    scanf("%d",&n);
    printf("Enter the number of bits that you want to be represented with\n");
    scanf("%d",&size);
    printf("The binary representation of %d is ",n);
    convert2binary(n,size);
    printf("\nRange of binary representation of values\n");
    call_convert_to_binary(n,size);
    printf("Enter the number whose binary representation you want\n");
    scanf("%d",&n);
    printf("Enter the number of bits that you want to be represented with\n");
    scanf("%d",&size);
    printf("The binary representation of %d is ",n);
    convert2binary(n,size);
}
