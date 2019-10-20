#include<iostream>
using namespace std;

class Timer
{
    private:
        int input;
    public:
    Timer();
    void start();
    void reset(int sec);
};

Timer::Timer()
{
    input=10;
}
void Timer::start()
{
    for(int i=input;i>0;--i)
    {
        cout<<i<<endl;
        for(int j=0;j<120000000;++j);
    }
    cout<<"\aTimes Up"<<endl;
}
void Timer::reset(int sec)
{
    input=sec;
}

int main()
{
    Timer t1;
    t1.start();
    return 0;
}
