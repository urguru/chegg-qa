#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int number_of_tickets, choice, total_price;
    char fast_pass;
    cout << " Welcome to Disneyland. Please select the ticket type\n";
    cout << " 1)  1-Day Disneyland Pass - $120.00\n";
    cout << " 2)  2-Day Disneyland Pass - $180.00\n";
    cout << " 3)  1-Day Disneyland/Californila Adventure Park Hopper - $200.00\n";
    cout << " 4)  2-Day Disneyland/Californila Adventure Park Hopper - $350.00\n";
    cout << " Please enter your choice (1-4) : ";
    cin >> choice;
    cout << " Please enter number of tickets : ";
    cin >> number_of_tickets;
    cout << " Would you like to add the digital Fastpass for $10 per ticket? (y/n) : ";
    cin >> fast_pass;
    cout << left<<setw(55) << " TICKET TYPE" << setw(15) << "QTY" << "SUBTOTAL\n";
    cout << " ------------------------------------------------------------------------------\n";
    if (choice == 1)
    {
        total_price = 120 * number_of_tickets;
        cout << setw(55) << " 1-Day Disneyland Pass" << setw(15) << number_of_tickets <<"$"<< total_price << ".00" << endl;
    }
    else if (choice == 2)
    {
        total_price = 180 * number_of_tickets;
        cout << setw(55) << " 2-Day Disneyland Pass" << setw(15) << number_of_tickets <<"$"<< total_price<< ".00" << endl;
    }
    else if (choice == 3)
    {
        total_price = 200 * number_of_tickets;
        cout << setw(55) << " 1-Day Disneyland/Californila Adventure Park Hopper" << setw(15) << number_of_tickets << "$"<< total_price<< ".00" << endl;
    }
    else if (choice == 4)
    {
        total_price = 350 * number_of_tickets;
        cout << setw(55) << " 2-Day Disneyland/Californila Adventure Park Hopper" << setw(15) << number_of_tickets <<"$"<< total_price << ".00" << endl;
    }
    if (fast_pass == 'y')
    {
        total_price += number_of_tickets * 10;
        cout << setw(70) << " FAST PASS CHARGE" <<"$"<<number_of_tickets*10<<".00"<< endl;
    }
    cout << right << setw(77) << "-------" << endl;
    cout <<left<< setw(70) << " GUEST TOTAL" <<"$"<< total_price <<".00"<< endl<< endl;
    cout << " Enjoy your stay at Disneyland, the happiest place on earth :) \n";
    return 0;
}
