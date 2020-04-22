#include<stdio.h>
int isPallindrome(char *str)
{
    int len=0,i=0;
    //Length of the string
    for(i=0;str[i]!='\0';++i);
    len=i;
    for(i=0;i<(len/2);++i)
    {
        //If both the letters are CAPITAL
        if(((int)str[i]>=65 && (int)str[i]<=90) &&(((int)str[len-i-1]>=65 && (int)str[len-i-1]<=90)))
        {
            if(str[i]!=str[len-i-1])
            {
                return 0;
            }
        }
        //If both the letters are SMALL
        else if(((int)str[i]>=97 && (int)str[i]<=122) &&(((int)str[len-i-1]>=97 && (int)str[len-i-1]<=122)))
        {
            if(str[i]!=str[len-i-1])
            {
                return 0;
            }
        }
        //if only the first letter is SMALL
        else if((int)str[i]>=97 && (int)str[i]<=122)
        {
            if(((int)str[i]-'a')!=((int)str[len-i-1]-'A'))
            {
                return 0;
            }
        }
        //If the second letter is SMALL
        else
        {
            if(((int)str[i]-'A')!=((int)str[len-i-1]-'a'))
            {
                return 0;
            }
        }
    }
    return 1;
}
void main()
{
    int result=0;
    char str[100];
    printf("Enter a string\n");
    scanf("%s",& str);
    result=isPallindrome(str);
    if(result==1)
    {
        printf("The given string is a pallindrome");
    }
    else
    {
        printf("The given string is not a pallindrome");
    }
}
