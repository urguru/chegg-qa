#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

int main(int argc,char *argv[])
{
    unsigned long int i;
    int decimal=0,len,val;
    if(argc!=2)
    {
        printf("Usage: %s number\n",argv[0]);
        return 0;
    }
    errno=0;
    i=strtoul(argv[1],NULL,16);
    printf("%d",i);
    if(errno!=0)
    {
        printf("Failed to convert number");
        return 0;
    }
    for(i=0;argv[1][i]!='\0';++i);
    //The len is reduced by one because of the power we raise to starts with one less than the length of the string
    len=i-1;
     for(i=0; argv[1][i]!='\0'; i++)
    {

        /* Find the decimal representation of argv[1][i] */
        if(argv[1][i]>='0' && argv[1][i]<='9')
        {
            val = argv[1][i] - 48;
        }
        else if(argv[1][i]>='a' && argv[1][i]<='f')
        {
            val = argv[1][i] - 97 + 10;
        }
        else if(argv[1][i]>='A' && argv[1][i]<='F')
        {
            val = argv[1][i] - 65 + 10;
        }

        decimal += val * pow(16, len);
        len--;
    }
    printf("%d",decimal);
}
