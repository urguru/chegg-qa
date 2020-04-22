#include<iostream>
using namespace std;
class BankAccount
{
    string owner;
    double balance;
    double interestRate;
    public:
    void setowner(string name);
    void setbalance(double bal);
    void setInterestRate(double interest);
    double getInterest();
    void print();
    bool equals(BankAccount acc);
    BankAccount();
    BankAccount(string name,double bal,double interest);
    BankAccount(const BankAccount &acc);
};
