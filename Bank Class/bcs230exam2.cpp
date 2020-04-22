#include"BankAccount.cpp"
using namespace std;
int main()
{
    //We are declaring this object and its values will be stored by default
    BankAccount acc;
    //acc.print() prints None for name, 0 for balance and 0 for interest because it invoked the default constructor
    acc.print();
    cout<<endl;
    //Now we use the setter methods to set the different values to the acc object
    acc.setowner("John Joseph");
    acc.setInterestRate(0.06);
    acc.setbalance(1000);
    //Now it prints different values as we have set new values to the object
    acc.print();
    cout<<endl;
    //Now we have created an object by invoking the parameterised constructor
    BankAccount acc2("Jeremy Jr",2000,0.04);
    //This prints the values Jeremy Jr balance=2000 and interest=0.04
    acc2.print();
    if(acc2.equals(acc))//This returns false so the else part gets executed
        cout<<"\nThe two objects are same\n";
    else
        cout<<"\nThe two objects are not same\n";
    //Now we are creating an object by calling the copy constructor
    BankAccount acc3=acc2;
    if(acc3.equals(acc2))//This evaluates to true as both of the objects are equal and if part gets executed
        cout<<"\nThe two objects are same\n";
    else
        cout<<"\nThe two objects are not same\n";
    //Using the getInterest function
    double interest=acc3.getInterest();
    cout<<"The interest for acc3 for a year is $"<<interest<<endl;
    cout<<"Thank You\n";
}
