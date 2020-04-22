#include<iostream>
#include<iomanip> //For text indentation and alignment
using namespace std;
int main()
{
    string names[25];
    double grades[25],total=0,avg;
    bool res[25];
    int total_students=5;
    cout<<"Welcome to the class of MAT150\nThere are "<<total_students<<" students in the class\nEnter the data for all the students one by one\n";
    //Taking the input
    for(int i=0;i<total_students;++i)
    {
        cout<<"Enter the name and the grade for student "<<i+1<<"\n";
        cin>>names[i]>>grades[i];
        //Adding the total grades of all the students for calculating average
        total+=grades[i];
        //If grades are less then 60 then res=false else true
        if(grades[i]<60)
            res[i]=false;
        else
            res[i]=true;
    }
    cout<<endl<<endl;
    cout<<left<<setw(15)<<"Name"<<setw(10)<<"Grade"<<"Status\n";
    for(int i=0;i<40;++i)cout<<"-";
    cout<<"\n";
    //Printing the values
    for(int i=0;i<total_students;++i)
    {
        cout<<setw(15)<<names[i]<<setw(10)<<grades[i];
        //If res==true then pass or else fail
        if(res[i])
            cout<<"Pass\n";
        else
            cout<<"Fail\n";
    }
    //Calculating the average value
    avg=total/total_students;
    //Printing the average value in the output console
    cout<<"\n\nThe average grade of the whole class is "<<avg<<endl;
    cout<<"\nThank You\n";
    return 0;
}
