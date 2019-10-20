#include<stdio.h>
void main()
{int n;
    printf("Welcome to your drink machine\n");
    printf("Hi Let's select a drink for you\npress1 for pepsi\npress2 for 7up");
    scanf("%d",&n);
    switch(n)
    {
        case 1:printf("Here's your pepsi");break;
        case 2:printf("here's your 7up");break;
        default:printf("Sorry there's no such drink");

    }
}
