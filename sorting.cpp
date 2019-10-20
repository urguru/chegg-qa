//Here I have not saved the details of the computers in any datafiled permanently
//As we just have to output the data on the user screen,I have stored few permanent variables for calculations
#include <iostream>
//Used this for thre file stream
#include <fstream>
//String manipulations
#include <string.h>
//This is for beautifying the output on the user console
#include<iomanip>
using namespace std;
int main()
{
    //Variables used for storing the data,their name will give the meaning
    int total_number_of_pc=0, number_of_powerful_pcs=0;
    float total_price_all=0, total_price_powerful=0, avg_price_all=0, avg_price_powerful=0;
    string computer_name, processor;
    float ram, cost;
    string powerful;
    //the file will be known by in_file in the program
    fstream in_file;
    //Opening the text file
    //Note that the text file should be in the same folder as the program or else give the full  address of the file
    in_file.open("allInOne.txt", ios::in);
    cout<<"Computer           Ram    Processor    Price    Power\n";
    cout<<setfill('-')<<setw(50)<<"\n";
    cout<<setfill(' ');
    while (!in_file.eof())
    {
        in_file>>computer_name>>ram>>processor>>cost;
        //Simple If else to check if the computer is powerful
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
        total_price_all += cost;
        //Prints the details on to the Console
        //left and setw are used for beautifying the output
        cout <<left<<setw(20)<<computer_name<<setw(10)<<processor;
        cout <<setw(10)<<ram<<setw(10)<<cost<<setw(5)<<powerful<<endl;
    }
    cout<<setfill('-')<<setw(50)<<"\n";
    cout<<setfill(' ')<<endl;
    //Calculating the prices
    avg_price_all=total_price_all/total_number_of_pc;
    avg_price_powerful=total_price_powerful/number_of_powerful_pcs;
    //Displaying the prices
    cout<<"Total Powerful Computers = "<<number_of_powerful_pcs<<endl;
    cout<<"Average Price of All computers = "<<avg_price_all<<endl;
    cout<<"Average Price of Powerful computers = "<<avg_price_powerful;
    //Closing the file
    in_file.close();
    return 0;
}
