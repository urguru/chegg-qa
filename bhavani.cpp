#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
class rational
{
int i,numer,denom;
float t1,t2;

public: void get();
void operator +(rational);
void operator -(rational);
void operator *(rational);
void operator >(rational);
void operator =(rational);
};
void rational::get()
{
int i;
cout<<"\nenter numerator part of the number: ";
cin>>numer;
cout<<"enter the denominator part of number: ";
cin>>denom;

}
void rational::operator +(rational c1)
{
rational temp;
temp.numer=(numer*c1.denom)+(c1.numer*denom);
temp.denom=(denom*c1.denom);
cout<<endl<<"Rational number after addition :\n";
cout<<"Numerator="<<temp.numer<<endl<<"Denominator="<<temp.denom<<endl;
}
void rational::operator -(rational c1)
{
rational temp;
temp.numer=(numer*c1.denom)-(c1.numer*denom);
temp.denom=(denom*c1.denom);
cout<<endl<<"Rational number after subtraction:";
cout<<endl<<"Numerator="<<temp.numer<<endl<<"Denominator="<<temp.denom;
}
void rational::operator *(rational c1)
{
rational temp;
temp.numer=numer*c1.numer;
temp.denom=denom*c1.denom;
cout<<endl<<"Rational number after multiplication:\n";
cout<<"Numerator="<<temp.numer<<endl<<"Denominator="<<temp.denom;
}
void rational::operator >(rational c1)
{t1=numer/denom;
t2=c1.numer/c1.denom;
 if(t1>t2)
  cout<<endl<<"First rational number is greater.";
 else
  cout<<endl<<"Second rational number is greater.";

}

void rational::operator =(rational c1)
{
 t1=numer/denom;
 t2=c1.numer/c1.denom;
  if(t1==t2)
   cout<<endl<<"The rational numbers are equal.";
  else
   cout<<endl<<"The rational numbers are unequal.";
   }
int main()
{
 rational c1,c2;
 int n;
 do
 {
  cout<<endl<<"1.Input data for rational no.:";
  cout<<endl<<"2.Addition";
  cout<<endl<<"3.Subtraction";
  cout<<endl<<"4.Multiplication";
  cout<<endl<<"5.Greater than";
  cout<<endl<<"6.Equal to";
  cout<<endl<<"7.Quit";
  cout<<endl<<"Enter your choice:";
  cin>>n;
  switch(n)
  {
   case 1:cout<<endl<<"Enter data for first rational number:";
   c1.get();
   cout<<endl<<"Enter data for second rational number:";
   c2.get();
   break;
   case 2:c1+c2;
   break;
   case 3:c1-c2;
   break;
   case 4:c1*c2;
   break;
   case 5:c1>c2;
   break;
   case 6:c1=c2;
   break;
   case 7:exit(0);
   break;
  }
 }while(n<=7);
  getch();
}

