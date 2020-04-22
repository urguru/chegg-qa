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

//QUEUE
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
void sort_largest_to_smallest(queue<int> q) // sort queue from largest to smallest
{
    vector<int> v;
    int c = 0;
    while (!q.empty())
    {
        v.push_back(q.front());
        q.pop();
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
    for (int i = 0; i < c; i++) //push sorted vector into queue
    {
        q.push(v[i]);
    }
    cout << "queue sorted from Largest to Smallest:\n";
    while (!q.empty()) //print queue sorted from largest to smallest
    {
        cout << q.front() << endl;
        q.pop();
    }
}
void queue_print_reverse(queue<int> q) //to print queue in reverse order
{
    cout << "queue in orginal order is:\n";
    vector<int> v;
    int c = 0;
    while (!q.empty())
    {
        cout << q.front() << " ";
        v.push_back(q.front());
        q.pop();
        c++;
    }
    cout << "queue in reverse order is:\n";
    for (int i = c - 1; i > -1; i--) // print vector
    {
        cout << v[i] << endl;
    }
}
void count_odd_even(queue<int> q) // count even and odd numbers
{
    int o = 0, e = 0;
    while (!q.empty()) //if queue is empty
    {
        if (q.front() % 2 == 0)
            e++;
        else
            o++;
        q.pop();
    }
    cout << "Odd Numbers in queue are : " << o << endl; //print odd numbers
    cout << "Even Numbers in queue are : " << e << endl; //print even numbers
}
void divisible_by_2_3_and_5(queue<int> q) //to count numbers divisible_by_2_3_and_5
{
    int t = 0, th = 0, f = 0; //counters for number divisible_by_2_3_and_5
    while (!q.empty()) //unless queue is empty
    {
        if (q.front() % 2 == 0) //if its divisible by 2
            t++;
        if (q.front() % 3 == 0) //if its divisible by 3
            th++;
        if (q.front() % 5 == 0) //if its divisible by 5
            f++;
        q.pop();
    }
    cout << "Numbers in queue Divisible by 2 are : " << t << endl; //print number divisible by 2
    cout << "Numbers in queue Divisible by 3 are : " << th << endl; //print number divisible by 3
    cout << "Numbers in queue Divisible by 5 are : " << f << endl; //print number divisible by 5
}
int main()
{
    queue<int> q;
    q.push(4);
    q.push(3);
    q.push(2);
    q.push(5);
    q.push(10);
    q.push(1);
    q.push(9);
    q.push(8);
    q.push(7);
    q.push(6);
    sort_largest_to_smallest(q); //function 1
    queue_print_reverse(q); //function 2
    count_odd_even(q); //function 3
    divisible_by_2_3_and_5(q); //function 4
}
