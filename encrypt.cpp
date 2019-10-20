#include<iostream>
#include<string>
#include<ctype.h>
#include<fstream>
using namespace std;

char encrypt(char ch,int y)
{
    if(!isalpha(ch))
    {
        return ch;
    }
    else if(isupper(ch))
    {
        return (ch-65+y)%26+65;
    }
    else
    {
        return (ch-97+y)%26+97;
    }
}
char decrypt(char ch,int y)
{
    char res=ch-y;
    if(res<65 || res<97)
    {
        res=ch+(26-y);
    }
    return res;
}

void shiftY(char message[],char encryptedMessage[],int y)
{
    int i=0;
    for(i=0;message[i]!='\0';++i)
    {
        encryptedMessage[i]=encrypt(message[i],y);
    }
    encryptedMessage[i]='\0';
}
int main()
{
    fstream inFile;
    char message[1000],encryptedMessage[1000];
    inFile.open("message.txt",ios::in);
    inFile.getline(message,1000);
    shiftY(message,encryptedMessage,4);
    cout<<encryptedMessage;
    inFile.close();
}
