#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,choice[100];
    float total_without_taxes=0,total_with_taxes=0,val;
    cout<<"**********************************************************************\n";
    cout<<"McDowell’s Restaurant\n";
    cout<<"**********************************************************************\n";
    cout<<"Make your selection from the menu below:\n";
    cout<<"1. Regular Hamburger $1.50\n";
    cout<<"2. Regular Cheeseburger $1.75\n";
    cout<<"3. Fish Sandwich $2.50\n";
    cout<<"4. Half-pounder with cheese $2.75\n";
    cout<<"5. French Fries $0.99\n";
    cout<<"6. Large Soft Drink $1.25\n";
    cout<<"***********************************************************************\n";
    cout<<"Select 1, 2, 3, 4, 5, or 6 ----- >\n";
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>choice[i];
    }
    total_without_taxes=0.0;
    for(int i=0;i<n;++i)
    {
        if(choice[i]==1)
            val=1.5;
        else if(choice[i]==2)
            val=1.75;
         else if(choice[i]==3)
            val=2.5;
        else if(choice[i]==4)
            val=2.75;
        else if(choice[i]==5)
            val=0.99;
        else if(choice[i]==6)
            val=1.25;
        total_without_taxes+=val;

    }
    total_with_taxes=total_without_taxes*1.065;
    printf("Please pay $%.2f\n",total_with_taxes);
    cout<<"Thank you for eating at McDowell's!";
}
