#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
    //To check if the name is in the file
    bool found=false;
    //To read the data from the file
    fstream infile;
    string name,name_from_file;
    float weight,height;
    //Opening the file in read mode
    infile.open("patients.txt",ios::in);
    cout<<"Please enter the name of the patient: ";
    cin>>name;
    while(infile)
    {
        infile>>name_from_file>>weight>>height;
        if(name==name_from_file)
        {
            found=true;
            break;
        }
    }
    //If not found then the below statement executes
    if(found==false)
    {
        cout<<endl<<"The patient does not exist in the database";
    }
    //If the name is found then we execute the statement below
    else
    {
        cout<<endl<<"BMI of the patient "<<name<<" = "<<(weight/(height*height))<<" kg/m2.";
    }
    return 0;
}
