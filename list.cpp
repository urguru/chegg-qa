
//linked list
#include <iostream>
#include <list>
#include <vector>
using namespace std;
void sort_largest_to_smallest(list<int> l) // sort list from largest to smallest
{
    vector<int> v;
    int c = 0;
    while (!l.empty())
    {
        v.push_back(l.front());
        l.pop_front();
        c++;
    }
    for (int i = 0; i < c; i++) //sort vector using modified bubble sort
    {
        int f = 0;
        for (int j = i + 1; j < c; j++)
        {
            if (v[i] > v[j])
            {
                int t;
                t = v[i];
                v[i] = v[j];
                v[j] = t;
                f++;
            }
        }
        if (f == 0) // loop statement
            break;
    }
    for (int i = 0; i < c; i++) //push sorted vector into list
    {
        l.push_front(v[i]);
    }
    cout << "list sorted from Largest to Smallest:\n";
    while (!l.empty()) //print list sorted from largest to smallest
    {
        cout << l.front() << endl;
        l.pop_front();
    }
}
void list_print_reverse(list<int> l) //to print list in reverse order
{
    cout << "list in orginal order is:\n";
    vector<int> v;
    int c = 0;
    while (!l.empty())
    {
        cout << l.front() << endl;
        v.push_back(l.front());
        l.pop_front();
        c++;
    }
    cout << "list in reverse order is:\n";
    for (int i = c - 1; i > -1; i--) // print vector in reverse order
    {
        cout << v[i] << endl;
    }
}
void count_odd_even(list<int> l) // count even and odd numbers
{
    int o = 0, e = 0;
    while (!l.empty()) //if list is empty
    {
        if (l.front() % 2 == 0)
            e++;
        else
            o++;
        l.pop_front();
    }
    cout << "Odd Numbers in list are : " << o << endl; //print odd numbers
    cout << "Even Numbers in list are : " << e << endl; //print even numbers
}
void divisible_by_2_3_and_5(list<int> l) //to count numbers divisible_by_2_3_and_5
{
    int t = 0, th = 0, f = 0;
    while (!l.empty()) //unless list is empty
    {
        if (l.front() % 2 == 0) //if its divisible by 2
            t++;
        if (l.front() % 3 == 0) //if its divisible by 3
            th++;
        if (l.front() % 5 == 0) //if its divisible by 5
            f++;
        l.pop_front();
    }
    cout << "Numbers in list Divisible by 2 are : " << t << endl; //print number divisible by 2
    cout << "Numbers in list Divisible by 3 are : " << th << endl; //print number divisible by 3
    cout << "Numbers in list Divisible by 5 are : " << f << endl; //print number divisible by 5
}
int main()
{
    list<int> l;
    l.push_front(4);
    l.push_front(3);
    l.push_front(2);
    l.push_front(5);
    l.push_front(10);
    l.push_front(1);
    l.push_front(9);
    l.push_front(8);
    l.push_front(7);
    l.push_front(6);
    sort_largest_to_smallest(l);
    list_print_reverse(l);
    count_odd_even(l);
    divisible_by_2_3_and_5(l);
}
