#include <iostream>
using namespace std;
int main()
{
    float base = 0.99;
    int choice, ch;
    char options;
    int voice_call, voice_min;
    int messages, voicemin, data;
start:
    cout << " Welcome to the Squeeze Cellular Bill Calculator! " << endl;
    cout << "What do you want to calculate?\n1. voice\n2. data";
    cin >> choice;
    if (choice == 1)
    {
        cout << "\nEnter choice 1.Voice 2.Voice min 3.Both";
        cin >> ch;
        if (ch == 1)
        {
            cout << "\nEnter number of voice call";
            cin >> voice_call;
            if (voice_call > 500)
                cout << "\nTotal charge(call exceeded, extra charge 145.98): $" << (base + 145.98);
            else
                cout << "\nTotal fare: $0.99";
        }
        if (ch == 2)
        {
            cout << "\nEnter number of voice minutes";
            cin >> voice_min;
            if (voice_min > 1500)
                cout << "\nTotal fare(min exceeded, extracharge 282.12)):$" << (base + 282.19);
            else
                cout << "\nTotal charge: $0.99";
        }
        if (ch == 3)
        {
            cout << "Enter number of voice call and minutes in same order";
            cin >> voice_call >> voice_min;
            if (voice_call > 500 && voice_min > 1500)
                cout << "\nTotal charge(both call and minute exceeded, extra charge 500+282.19+145.98): $" << (base + 282.19 + 145.98 + 500.00);
            else
                cout << "Total charge: $" << base;
        }
    }
    if (choice == 2)
    {
        cout << "\nEnter 1.Message sand voice minutes \n2.Download data";
        cin >> ch;
        if (ch == 1)
        {
            cout << "\nEnter number of messages";
            cin >> messages;
            if (messages > 300)
            {
                cout << "\nTotal charge(messages limit exceeded, extra charge 331.36): $" << (base + 331.36);
            }
            else
                cout << "\nCharge" << base;
            cout << "\nEnter number of messages and voice minutes in same order";
            cin >> messages >> voicemin;
            if (messages > 300 && voicemin < 900)
            {
                cout << "\nTotal charge(messages limit exceeded, extra charge 29.99): $" << (base + 29.99);
            }
            else
                cout << "\nTotal charge: $" << base;
        }
        if (ch == 2)
        {
            cout << "\nEnter download data(GB))";
            cin >> data;
            if (data > 1 && data < 2)
                cout << "Total fare(Download data exceeded, extra charge 29.99): $" << (base + 29.99);
            else if (data > 2 && data < 8)
                cout << "\nTotal charge (Download data exceeded, extra charge 69.99): $" << (base + 69.99);
            else if (data > 8 || data == 8)
                cout << "\nTotal charge (Download data exceeded, extra charge 199.99): $" << (base + 199.99);
            else
                cout << "\nTotal fare: $" << base;
        }
    }
    cout << "\nDo you want to continue?(y/n)";
    cin >> options;
    if (options == 'y' || options == 'Y')
        goto start;
    else
        cout << "\nThank you! Have a great day!";
}
