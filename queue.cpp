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
