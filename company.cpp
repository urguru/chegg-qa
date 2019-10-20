#include<iostream>
#include<iomanip>
using namespace std;
float percent_cut(float g_p)
{
    if(g_p<=500)
        return 0.05;
    if(g_p<=1000)
        return 0.06;
    if(g_p<=1500)
        return 0.07;
    return 0.08;
}
int main()
{
    int no_of_employees=0;

    while(true)
    {
        float pay_rate,gross_pay=0,tax_deduction,net_pay;
        int hours_no;
        cout<<"\nHello Employee,Enter your pay rate\n";
        cin>>pay_rate;
        if(pay_rate==-99)
        {
            break;
        }
        cout<<"Enter the number of hours\n";
        cin>>hours_no;
        gross_pay=pay_rate*hours_no;
        tax_deduction=gross_pay*percent_cut(gross_pay);
        net_pay=gross_pay-tax_deduction;
        cout<<setw(40)<<left<<"Your Gross Pay is"<<gross_pay<<endl;
        cout<<setw(40)<<"Your Tax Deductions is"<<tax_deduction<<endl;
        cout<<setw(40)<<"Your net pay is"<<net_pay<<endl;
    }
}
