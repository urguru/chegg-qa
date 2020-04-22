#include <iostream>
#include <stack>
#include <vector>
using namespace std;
void sort_largest_to_smallest(stack<int> s) // sort stack from largest to smallest
{
    vector<int> v;
    int c = 0;
    while (!s.empty())
    {
        v.push_back(s.top());
        s.pop();
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
    for (int i = 0; i < c; i++) //push sorted vector into stack
    {
        s.push(v[i]);
    }
    cout << "Stack sorted from Largest to Smallest:\n";
    while (!s.empty()) //print stack sorted from largest to smallest
    {
        cout << s.top() << endl;
        s.pop();
    }
}
void stack_print_reverse(stack<int> s) //to print stack in reverse order
{
    cout << "Stack in orginal order is:\n";
    vector<int> v;
    int c = 0;
    while (!s.empty())
    {
        cout << s.top() << endl;
        v.push_back(s.top());
        s.pop();
        c++;
    }
    cout << "Stack in reverse order is:\n";
    for (int i = c - 1; i > -1; i--) // print vector in reverse order
    {
        cout << v[i] << endl;
    }
}
void count_odd_even(stack<int> s) // count even and odd numbers
{
    int o = 0, e = 0;
    while (!s.empty()) //if stack is empty
    {
        if (s.top() % 2 == 0)
            e++;
        else
            o++;
        s.pop();
    }
    cout << "Odd Numbers in Stack are : " << o << endl; //print odd numbers
    cout << "Even Numbers in Stack are : " << e << endl; //print even numbers
}
void divisible_by_2_3_and_5(stack<int> s) //to count numbers divisible_by_2_3_and_5
{
    int t = 0, th = 0, f = 0; //counters for number divisible_by_2_3_and_5
    while (!s.empty()) //unless stack is empty
    {
        if (s.top() % 2 == 0) //if its divisible by 2
            t++;
        if (s.top() % 3 == 0) //if its divisible by 3
            th++;
        if (s.top() % 5 == 0) //if its divisible by 5
            f++;
        s.pop();
    }
    cout << "Numbers in Stack Divisible by 2 are : " << t << endl; //print number divisible by 2
    cout << "Numbers in Stack Divisible by 3 are : " << th << endl; //print number divisible by 3
    cout << "Numbers in Stack Divisible by 5 are : " << f << endl; //print number divisible by 5
}
int main()
{
    stack<int> s;
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(5);
    s.push(10);
    s.push(1);
    s.push(9);
    s.push(8);
    s.push(7);
    s.push(6);
    sort_largest_to_smallest(s); //function 1
    stack_print_reverse(s); //function 2
    count_odd_even(s); //function 3
    divisible_by_2_3_and_5(s); //function 4
}
