#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    //We declare four variables for storing all the words
    char first[20],middle[20],last[20],full_name[60];
    cout<<"Please enter your first name: ";
    //This is the syntax of the getline...
    //cin.getline(name_of_the_string,size);
    cin.getline(first,20);
    cout<<"Please enter your middle name: ";
    cin.getline(middle,20);
    cout<<"Please enter your last name: ";
    cin.getline(last,20);
    //we first copy the first name to the full name
    strcpy(full_name,first);
    //We then find the length of the full_name and then add a space at the end
    int len=strlen(full_name);
    full_name[len]=' ';
    full_name[len+1]='\0';
    //We concatenate the middle name
    strcat(full_name,middle);
    len=strlen(full_name);
    full_name[len]=' ';
    full_name[len+1]='\0';
    //We then concatenate the last name to the full name
    strcat(full_name,last);
    cout<<"\nYour full name is: "<<full_name<<endl;
    //The length is two less  than the length of full name because we added two spaces
    len=strlen(full_name)-2;
    //WE check the conditions for the first,middle and last names being equal using strcmp
    //strcmp returns zero if both the characters arrays are equal
    cout<<"The total number of characters in your name is: "<<len<<endl;
    if(strcmp(first,middle)==0)
        cout<<"The first and the middle names are the same\n";
    if(strcmp(first,last)==0)
        cout<<"The first and the last names are the same\n";
    if(strcmp(middle,last)==0)
        cout<<"The middle and the last names are the same\n";
    return 0;
}
