#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int number_of_tickets, choice, total_price;
    char fast_pass;
    cout << "Welcome to Disneyland. Please select the ticket type\n";
    cout << "1)  1-Day Disneyland Pass - $120.00\n";
    cout << "2)  2-Day Disneyland Pass - $180.00\n";
    cout << "3)  1-Day Disneyland/Californila Adventure Park Hopper - $200.00\n";
    cout << "4)  2-Day Disneyland/Californila Adventure Park Hopper - $350.00\n";
    cout << " Please enter your choice (1-4) : ";
    cin >> choice;
    cout << " Please enter number of tickets : ";
    cin >> number_of_tickets;
    cout << " Would you like to add the digital Fastpass for $10 per ticket? (y/n) : ";
    cin >> fast_pass;
    cout << " -------------------------------------------------------------------------\n";
    cout << setw(20) << " TICKET TYPE" << setw(10) << "QTY" << setw(7) << "SUBTOTAL\n";
    if (choice == 1)
    {
        total_price = 120 * number_of_tickets;
        cout << setw(20) << " 1-Day Disneyland Pass" << setw(10) << number_of_tickets << setw(7) << total_price << ".00" << endl;
    }
    else if (choice == 2)
    {
        total_price = 180 * number_of_tickets;
        cout << setw(20) << " 1-Day Disneyland Pass" << setw(10) << number_of_tickets << setw(7) << total_price<< ".00" << endl;
    }
    else if (choice == 3)
    {
        total_price = 200 * number_of_tickets;
        cout << setw(20) << " 1-Day Disneyland Pass" << setw(10) << number_of_tickets << setw(7) << total_price<< ".00" << endl;
    }
    else if (choice == 4)
    {
        total_price = 350 * number_of_tickets;
        cout << setw(20) << " 1-Day Disneyland Pass" << setw(10) << number_of_tickets << setw(7) << total_price << ".00" << endl;
    }
    if (fast_pass == 'y')
    {
        total_price += number_of_tickets * 10;
        cout << setw(30) << " FAST PASS CHARGE" << total_price<< endl;
    }
    cout << right << setw(37) << "-------" << endl;
    cout << setw(30) << " GUEST TOTAL" << total_price << endl
         << endl;
    cout << " Enjoy your stay at Disneyland, the happiest place on earth :)\n";
    return 0;
}