#include<stdio.h>
#define SIZE 80

int testPallindrome(char *str,int i,int j)
{
    //These while loops are to escape all the spaces
    while(str[i]==' ')
    {
        i++;
    }
    while(str[j]==' ')
    {
        j--;
    }
    //This is the final exit condition...If i>=j then it means that all the characters before have matched
    if(i>=j)
    {
        return 1;
    }
    //We check if the first and the last string are equal then we recursively call the testPallindrome function for the shorter version of the string
    if(str[i]==str[j])
    {
        return testPallindrome(str,i+1,j-1);
    }
    //If the characters arent equal then we return 0
    else
    {
        return 0;
    }
}

int main(void)
{
    char c;
    char string[SIZE];
    unsigned int count=0;

    puts("Enter a sentence:");

    //get a sentence to test from the user

    while((c=getchar())!='\n' && count<SIZE)
    {
        string[count++]=c;
    }
    string[count]='\0';//terminating string
    //call the recursive function,textPalindrome
    if(testPallindrome(string,0,count-1))
    {
        printf("Its a pallindrome\n");
    }
    else
    {
        printf("Its not a pallindrome\n");
    }

}
