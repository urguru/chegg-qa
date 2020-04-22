#include"BankAccount.h"
using namespace std;
void BankAccount::setowner(string name)
{
    owner=name;
}
void BankAccount::setbalance(double bal)
{
    balance=bal;
}
void BankAccount::setInterestRate(double interest)
{
    if (interest<0)
        interestRate=0;
    else
        interestRate=interest;
}
double BankAccount::getInterest()
{
    return balance*interestRate;
}
void BankAccount::print()
{
    cout<<owner<<"\'s bank account has a balance of $"<<balance<<" and the interest rate is "<<interestRate<<". The yearly interest is $"<<getInterest()<<".";
}
bool BankAccount::equals(BankAccount acc)
{
    if(owner!=acc.owner || balance!=acc.balance || interestRate!=acc.interestRate)
        return false;
    return true;
}
BankAccount::BankAccount()
{
    owner="None";
    balance=0;
    interestRate=0;
}
BankAccount::BankAccount(string name,double bal,double interest)
{
    owner=name;
    balance=bal;
    interestRate=interest;
}
BankAccount::BankAccount(const BankAccount & acc)
{
    owner=acc.owner;
    balance=acc.balance;
    interestRate=acc.interestRate;
}
