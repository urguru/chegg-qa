#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;
//Function to calculate grade
char calcGrade(float n)
{
    if(n>=9)
        return 'A';
    if(n>=8)
        return 'B';
    if(n>=7)
        return 'C';
    if(n>=6)
        return 'D';
    return 'F';
}
int main()
{
    //A structure variable
    struct student{
    string name;
    float test1,test2,lab,quiz,final,total;
    char grade;
    };
    //N is the number of students
    int n;
    cout<<"Enter the number of students\n";
    cin>>n;
    student s[n];
    //taking the input for all the students
    for(int i=0;i<n;++i)
    {
        //This is used to get the last enter key pressed while input so that it doesnt mess with the name input
        getchar();
        cout<<"Enter the name of the stundent\n";
        getline(cin,s[i].name);
        cout<<"Enter the marks of the student in test1,test2,lab,quiz,final\n";
        cin>>s[i].test1>>s[i].test2>>s[i].lab>>s[i].quiz>>s[i].final;
        //We mulitply the final result  by 0.1 because the marks are out of 10 and not out of 100
        s[i].total=0.1*(s[i].test1*0.2+s[i].test2*0.2+s[i].lab*0.15+s[i].quiz*0.15+s[i].final*0.3);
        s[i].grade=calcGrade(s[i].total);
    }
    //Beautifying and printing the output
    cout<<fixed<<setprecision(2);
    cout<<left<<setw(30)<<"Student Name"<<setw(8)<<"Test1"<<setw(8)<<"Test2"<<setw(8)<<"Lab"<<setw(8)<<"Quiz"<<setw(8)<<"Final"<<setw(8)<<"Total"<<setw(8)<<"Grade";
    cout<<endl<<left<<setw(30)<<"============"<<setw(8)<<"====="<<setw(8)<<"====="<<setw(8)<<"==="<<setw(8)<<"===="<<setw(8)<<"====="<<setw(8)<<"====="<<setw(8)<<"====="<<endl;
    for(int i=0;i<n;++i)
    {
    cout<<left<<setw(30)<<s[i].name<<setw(8)<<s[i].test1<<setw(8)<<s[i].test2<<setw(8)<<s[i].lab<<setw(8)<<s[i].quiz<<setw(8)<<s[i].final<<setw(8)<<s[i].total<<setw(8)<<s[i].grade<<endl;
    }
}
