#include<iostream>
#include<string>
using namespace std;
class Person
{
    public:
    int age;
    string name;
    //Constructors are a type of function
    //So here we are doing constructor overloading
    Person()
    {
        name="Default name";
        age=0;
    }
    //Here is another constructor with arguments
    Person(string Name,int Age)
    {
        name=Name;
        age=Age;
    }
    //The functions have been added the keyword virtual to exhibit run-time polymorphism
    virtual void print()
    {
        cout<<"Name : "<<name;
        cout<<"\nAge : "<<age;
    }
};
//The class student inherits all the elements and the functions from theperson class
class Student:public Person
{
    public:
    int rollno;
    float fees;
    Student(string Name,int Age,int Rollno,float Fees):Person(Name,Age)
    {
        rollno=Rollno;
        fees=Fees;
    }
    //Now this will over write the person class print during runtime polymorphism if we call the print function
    virtual void print()
    {
        cout<<"Name : "<<name;
        cout<<"\nAge : "<<age;
        cout<<"\nRoll No : "<<rollno;
        cout<<"\nFees : "<<fees;
    }
};
//The class gradstudent inherits from the class student
class GradStudent:public Student
{
    public:
    string stream;
    float stipend;
    GradStudent(string Name,int Age,int Rollno,float Fees,string Stream,float Stipend):Student(Name,Age,Rollno,Fees)
    {
        stream=Stream;
        stipend=Stipend;
    }
    void print()
    {
        cout<<"Name : "<<name;
        cout<<"\nAge : "<<age;
        cout<<"\nRoll No : "<<rollno;
        cout<<"\nFees : "<<fees;
        cout<<"\nStream : "<<stream;
        cout<<"\nStipend : "<<stipend<<endl;
    }
    //This is called operator overloading.Its also a part of polymorphism
    friend ostream &operator<<(ostream& out,GradStudent &s1);
};
ostream &operator<<(ostream& out,GradStudent &s1)
{
    s1.print();
    return out;
}
int main()
{
    Person *_pointer;
    Person person1;
    _pointer=&person1;
    cout<<"This is the default constructor values for the class person\n";
    _pointer->print();
    cout<<"\nThis is the constructor overloading function for the class person\n";
    Person person2("John Harris",40);
     _pointer=&person2;
_pointer->print();
    cout<<"\nWe are creating an object of type student wwhich inherits the elements from person\n";
    Student student1("Iva Jones",30,119,50000.00);
    _pointer=&student1;
    _pointer->print();
    cout<<"\nWe are creating an object of type GradStudent which inherits the elements from Student\n";
    GradStudent gradstudent1("Guruprasad",19,123,40000.00,"Computer Science",5000);
    _pointer=&gradstudent1;
    _pointer->print();
    cout<<"\nNow we are printing the values of the GradStudent through the operator cout<< overloading\n";
    cout<<gradstudent1;
    cout<<"\nIf we notice the code the _pointer is of the type Person but it is able to reference all its child classes and then call thier functions\nThis is run time polymorphism\n";
}
