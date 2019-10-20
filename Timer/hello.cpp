#include<iostream>
using namespace std;
class Number
{
    private:
    int num;
    public:
    Number()
    {
        //This is a default constructor
    }
    //Example of a constructor
    Number(int n)
    {
       num=n; 
    }
    //Copy constructor
    Number(const Number &N)
    {
        num=N.num;
    }
    //Overloading operator of a class
    Number operator+(int n)
    {
        Number temp;
        temp.num=num+n;
        return temp;
    }
    //friend function
    friend void printnum(Number N);
    //Friend operator overloading
    friend istream& operator>>(istream & in,const Number N);
    //Destructor
    ~Number()
    {
        cout<<"Destructor Invoked\n";
    }
};

void printnum(Number N)
{
    cout << "The number is " << N.num;
}

istream &operator>>(istream &in, const Number N)
{
    in >> N.num;
}
//Regular operator overloading
ostream &operator<<(ostream& out,bool value)
{
    out<<"This is a boolean value";
}
