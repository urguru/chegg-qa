#include <stdio.h>
#include <stdlib.h>
//To convert a character to uppercase
char toUpperCase(char ch)
{
    ch=ch-32;
    return ch;
}
//Function to check if the character is uppercase
int isUpperCase(char ch)
{
    if(ch>=65 && ch<=90)
        return 1;
    else
        return 0;
}
//To check if its an alphabet
int isAlphabet(char c)
{
    if((c>=65 &&c<=90)||(c>=97 && c<=122))
       return 1;
    return 0;
}
//To convert a character to lowercase
char toLowerCase(char ch)
{
    ch=ch+32;
    return ch;
}
//Function to find the string length
int stringLength(char s[])
{
    int i=0;
    for(i=0;s[i]!='\0';++i);
    return i;
}
//To check if the string is valid
int isValid(char* word)
{
    int i=0,c=0,len=0;
    len=stringLength(word);
    //If its an empty word
    if(word==" ")
        return 0;
    if(len==0)
        return 0;
    //If all the characters are just underscores
    for(i=0;i<len;++i)
    {
        if(word[i]=='_')
            c++;
        //If the characters next to underscore are not alphabets
        if(word[i]=='_' && (!isAlphabet(word[i+1])&&(word[i+1]!='\0')))
            return 0;
    }
    if(c==1 && word[len-1]=='_')
        return 0;
    if(c==0)
        return 0;
    if(c==len)
        return 0;
    c=0;
    //If the string doesnot contain any alphabets
    for(i=0;i<len;++i)
    {
        if(!isAlphabet(word[i]))
            c++;
        if(!isAlphabet(word[0]))
            return 0;
    }
    if(c==len)
        return 0;
    return 1;
}
//Conversion to camelCase
void camelCase(char* word)
{
   char result[100];
   int length=stringLength(word),i,j=0;
   if(!isValid(word))
   {
       printf("Invalid Input String\n");
   }
   //If the string is valid then do the conversion
   else
   {
       for(i=0;i<length;++i)
       {
           if(word[i]=='_')
           {
               if(word[i+1]=='\0')
               {
                   result[j]='\0';
               }
               else if(!isUpperCase(word[i+1]))
               {
               result[j]=toUpperCase(word[++i]);
               }
               else
               {
                   result[j]=word[++i];
               }
               ++j;
           }
           else
           {
               if(isUpperCase(word[i]))
               {
                result[j]=toLowerCase(word[i]);
               }
               else
               {
               result[j]=word[i];
               }
               j++;
           }
       }
       result[j]='\0';
       printf("%s\n",result);
   }
}
//The main function
int main()
{
    char word[100];
    int i=15;
    printf("Enter the word\n");
    while(i--)
    {
        scanf("%s",word);
        camelCase(word);
    }
   return 0;
}
