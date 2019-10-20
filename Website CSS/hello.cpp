#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    cout << "This is a program to compute the grades of the students\n";
    int test1 = 0, test2 = 0, test3 = 0;
    int total_boys = 0, total_girls = 0, total_students = 0;
    char gender, choice;
    float tot_avg = 0, avg_boys = 0, avg_girls = 0, individual_avg = 0;
    string name;
    while (true)
    {
        cout << "Enter the name of the student\n";
        cin >> name;
        cout << "Enter the gender of " << name << "  : Enter b for boy and g for girl\n";
        cin >> gender;
        cout << "Has the student written all the three tests or only two tests\nEnter 1 for three tests and any other value for two tests\n";
        cin >> choice;
        if (choice == 1)
        {
            cout << "Enter the marks of the three subjects\n";
            cin >> test1 >> test2 >> test3;
            individual_avg = (test1 + test2 + test3) / 3;
        }
        else
        {
            cout << "Enter the marks of the two subjects\n";
            cin >> test1 >> test2;
            individual_avg = (test1 + test2) / 2;
        }
        if (gender == 'g')
        {
            avg_girls += individual_avg;
            total_girls++;
        }
        else
        {
            avg_boys += individual_avg;
            total_boys++;
        }
        total_students++;
        tot_avg += tot_avg;
        print_result(name, individual_avg);
        cout << "Press y\\Y to continue or any other key to exit \n";
        char c;
        cin >> c;
        if (!(c == 'y' || c == 'Y'))
        {
            break;
        }
    }
    tot_avg = tot_avg / total_students;
    avg_boys /= total_boys;
    avg_girls /= total_girls;
    cout << "Average of all the boys of the class = " << avg_boys << endl;
    cout << "Average of all the girls of the class = " << avg_girls << endl;
    cout << "Average of all the students of the class = " << tot_avg << endl;
    return 0;
}

void print_result(string str, float individual_avg)
{
    if (individual_avg >= 90)
    {
        cout << str << " : Excellent You got A\n";
    }
    else if (individual_avg >= 80)
    {
        cout << str << " : Good, You got B\n";
    }
    if (individual_avg >= 70)
    {
        cout << str << " : OK, You got C\n";
    }
    else
    {
        cout << str << " : Failed\n";
    }
}