#include<stdio.h>
void main()
{
    //Here we are declaring the variables a and b as integers
    int a,b;
    //We are assigning 100 to a
    a=100;
    //We are declaring ptr as a pointer to an object of type integer
    int *ptr;
    //We are assigning the address of a using the ampersand operator to ptr
    ptr=&a;
    //We are printing a first
    printf("%d\n",a);
    //Then using the address to the variable a ie ptr we are printing the value of a
    printf("%d\n",*ptr);
}
