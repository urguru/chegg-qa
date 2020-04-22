#include<time.h>
#include<stdio.h>      /* fgets */
#include<stdlib.h>     /* atoi */
#include<string.h>
//This function returns the date and time
char *getDateAndTime()
{
    time_t now = time(0);
    // convert now to string form
    char* dt = ctime(&now);
    return dt;
}
int getinteger()
{
    char num[7];
    printf("Enter an integer(1-1000000) or type x to exit: ");
    fgets(num,7,stdin);
    //If the input character is x then we return -1
    if(num[0]=='x')
    {
        return -1;
    }
    //Else we convert the character array to a number
    return atoi(num);
}
//This function converts the decimal to binary and converts it to a character array and returns it
char *decimal_to_binary(int n)
{
    char num[100];
    int i=0;
    while(n)
    {
        if(n%2==0)
            num[i++]='0';
        else
            num[i++]='1';
        n=n/2;
    }
    num[i++]='\0';
    return strrev(num);
}
//This function converts the decimal to octal and converts it to a character array and returns it
char *decimal_to_octal(int n)
{
    int i=0;
    char num[100];
    while(n)
    {
        num[i++]=(char)(n%8 +'0');
        n=n/8;
    }
    num[i++]='\0';
    return strrev(num);
}
//This function converts the decimal to hexadecimal and converts it to a character array and returns it
char *decimal_to_hexadecimal(int n)
{
    int i=0;
    char num[100];
    while(n)
    {
        if(n%16<=9)
            num[i++]=(char)(n%16 +'0');
        else
            num[i++]=(char)((n%16)-10 + 'A');
        n=n/16;
    }
    num[i++]='\0';
    return strrev(num);
}
int main()
{
    int num;
    char name[20],file_name[50],ch;
    FILE *fptr;
    printf("Enter your name: ");
    fgets(name,20,stdin);
    num=getinteger();
    //The exit condition
    if(num==-1)
        exit(0);
    printf("\nDecimal: %d\n",num);
    printf("Hexadecimal: %s\n",decimal_to_hexadecimal(num));
    printf("Octal: %s\n",decimal_to_octal(num));
    printf("Binary: %s\n",decimal_to_binary(num));
    printf("\nSave to a file?(y/n): ");
    ch=getchar();
    //This is to escape the newline feed that we press after entering the character
    getchar();
    //If the input is n then we exit or else we write to file
    if(ch=='n')
    {
        printf("\nGood Bye!");
    }
    else
    {
        printf("\nEnter file name :");
        gets(file_name);
        //Open the file using the filename
        fptr = fopen(file_name, "w");
        //Send the output to the file
        fprintf(fptr,"%s\n",name);
        fprintf(fptr,"Today's date : %s \n",getDateAndTime());
        fprintf(fptr,"\nDecimal: %d\n",num);
        fprintf(fptr,"Hexadecimal: %s\n",decimal_to_hexadecimal(num));
        fprintf(fptr,"Octal: %s\n",decimal_to_octal(num));
        fprintf(fptr,"Binary: %s\n",decimal_to_binary(num));
        printf("\nFile Saved\n");
        printf("\nGood Bye!");
        //Closing the file
        fclose(fptr);
    }

}
