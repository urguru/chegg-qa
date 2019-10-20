#include<iostream>
using namespace std;

int main()
{
    int shipWeightPounds;
    int shipCostCents=0;

    const int FLAT_FEE_CENTS=75;
    const int CENTS_PER_POUND=25;

    cin>>shipWeightPounds;
    shipCostCents=FLAT_FEE_CENTS+CENTS_PER_POUND*shipWeightPounds;

    cout<<"Weight(lbs): "<<shipWeightPounds;
    cout<<"\nFlat fee(cents): "<<FLAT_FEE_CENTS;
    cout<<"\nCents per lb: "<<CENTS_PER_POUND;
    cout<<"\nShipping Cost(cents): "<<shipCostCents;

    return 0;
}
