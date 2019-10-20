#include<iostream>
using namespace std;
//We declare a structure named Money with two integer variables
struct Money
    {
        int dollars;
        int cents;
    };
//We multiply the dollars by 100 and then add that to the existing cents and return the whole sum
int centsMoney(const Money &m)
{
    int total_cents=0;
    total_cents=m.cents+m.dollars*100;
    return total_cents;
}
//Adds two amounts
//We normally add the dollar values
//If the sum of the cents value goes more than 100 then we add one to dollars and then store the cents as the remainder of 100
Money addMoney(const Money &m1,const Money &m2)
{
    Money m3;
    m3.dollars=m1.dollars+m2.dollars;
    m3.cents=m1.cents+m2.cents;
    if(m3.cents>=100)
    {
        m3.dollars++;
        m3.cents=m3.cents%100;
    }
    return m3;
}
//If the first value is smaller than second value we return 0
//Else we subtract normally
//If m1.cents is greater than m2.cents then we add 100 to m1 and then subtract 1 from the m3.dollars which is the difference of the dollars
//And then return the actual value
Money subtractMoney(const Money &m1,const Money &m2)
{
    Money m3;
    if((m1.dollars<=m2.dollars)&&(m1.cents<=m2.cents))
    {
        m3.dollars=0;
        m3.cents=0;
        return m3;
    }
    m3.dollars=m1.dollars-m2.dollars;
    if(m2.dollars>m1.dollars)
    {
        m3.dollars--;
        m3.cents=(m1.cents+100)-m2.cents;
    }
    else
    {
        m3.cents=m1.cents-m2.cents;
    }
    return m3;
}
//This is used for basic printing
void printMoney(const Money &m1)
{
    cout<<"$ "<<m1.dollars<<" "<<m1.cents<<" cents\n";
}
int main()
{
    int cents;
    Money m1,m2,m3;
    m1.dollars=10;
    m1.cents=50;
    printMoney(m1);
    m2.dollars=20;
    m2.cents=50;
    m3=subtractMoney(m1,m2);
    printMoney(m3);
    m3=addMoney(m1,m2);
    printMoney(m3);
    cents=centsMoney(m3);
    cout<<cents<< " cents\n";
    m3=subtractMoney(m2,m1);
    printMoney(m3);
    /* Output Expected
    $ 10 50 cents
    $ 0 0 cents
    $ 31 0 cents
    3100 cents
    $ 10 0 cents
    */
}
