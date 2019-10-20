#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<time.h>
using namespace std;
//Total distance is 6064 km
//Total hours in a day is 24 hours
//Minimum speed is 10 and maximum speed is 30
int main()
{
    srand(time(0));
    int total_days_overall=0,iter_no;
    float avg_days=0;
    cout<<"Enter the number of iterations that you want to carry out\n";
    cin>>iter_no;
    for(int n=0;n<iter_no;++n)
    {
        int distance_remaining=6064;
        int speed_for_the_day;
        int total_days_per_trip=0;
        while(distance_remaining>0)
        {
            speed_for_the_day=10+rand()%21;
            total_days_per_trip++;
            distance_remaining=distance_remaining-24*speed_for_the_day;
        }
        total_days_overall+=total_days_per_trip;
    }
    avg_days=total_days_overall/iter_no;
    //The ceil function is used to approximate the number of days to an integer
    avg_days=ceil(avg_days);
    //It takes around 100 simulations to get an average value and it always is 13 days
    //For any values higher its always 13 days
    cout<<"Average days needed to travel the total distance is "<<avg_days;
}

