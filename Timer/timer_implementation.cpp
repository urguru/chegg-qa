#include <iostream>
#include "timer_class.cpp"
using namespace std;

Timer::Timer()
{
    input = 10;
}
void Timer::start()
{
    for (int i = input; i > 0; --i)
    {
        cout << i << endl;
        for (int j = 0; j < 450000000; ++j)
            ;
    }
    cout << "\aTimes Up" << endl;
}
void Timer::reset(int sec)
{
    input = sec;
}