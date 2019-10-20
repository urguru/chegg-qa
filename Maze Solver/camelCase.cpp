#include <stdio.h>
#include <stdlib.h>

char toUpperCase(char ch)
{
    ch=ch-32;
    return ch;
}
bool isUpperCase(char ch)
{
    if(ch>=65 && ch<=90)
        return true;
    else
        return false;
}
bool isAlphabet(char c)
{
    if((c>=65 &&c<=90)||(c>=97 && c<=122))
       return true;
    return false;
}
char toLowerCase(char ch)
{
    ch=ch+32;
    return ch;
}
int stringLength(char s[])
{
    int i=0;
    for(i=0;s[i]!='\0';++i);
    return i;
}

bool isValid(char* word)
{
    int i=0,c=0,len=0;
    len=stringLength(word);
    if(word==" ")
        return false;
    if(len==0)
        return false;
    for(i=0;i<len;++i)
    {
        if(word[i]=='_')
            c++;
        if(word[i]=='_' && (!isAlphabet(word[i+1])&&(word[i+1]!='\0')))
            return false;
    }
    if(c==1 && word[len-1]=='_')
        return false;
    if(c==0)
        return false;
    if(c==len)
        return false;
    c=0;
    for(i=0;i<len;++i)
    {
        if(!isAlphabet(word[i]))
            c++;
        if(!isAlphabet(word[0]))
            return false;
    }
    if(c==len)
        return false;
    return true;
}

void camelCase(char* word)
{
   char result[100];
   int length=stringLength(word),i,j=0;
   if(!isValid(word))
   {
       printf("Invalid Input String\n");
   }
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
