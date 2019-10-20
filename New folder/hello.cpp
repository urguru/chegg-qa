#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{
    int total_number_of_pc=0, number_of_powerful_pcs=0;
    float total_price_all=0, total_price_powerful=0, avg_price_all=0, avg_price_powerful=0;
    string computer_name, processor;
    float ram, cost;
    string powerful;
    fstream in_file;
    in_file.open("allInOne.txt", ios::in);
    int counter=0;
    while (!in_file.eof())
    {
        infile>>computer_name>>processor;
        infile>>ram>>cost;
        if(processor=="i7" && ram>12)
        {
           powerful="y";
           total_price_powerful +=cost;
           number_of_powerful_pcs++;
        }
        else
        {
            powerful = "n";
        } 
        total_number_of_pc++;
        counter++;
        total_price_all += Computer[counter].cost;

        cout <<computer_name<<" "<<processor<<" ";
        cout << ram << " " << cost << " " <<powerful;
    }
    avg_price_all=total_price_all/total_number_of_pc;
    avg_price_powerful=total_price_powerful/number_of_powerful_pcs;
    cout<<"Average Price of all PCS ="<<avg_price_all<<endl;
    cout<<"Average Price of Powerful PCS="<<avg_price_powerful;
    in_file.close();
    return 0;
}
