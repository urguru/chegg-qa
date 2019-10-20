//main.cpp
// This program implements the Monte Carlo Method for estimating the value of PI.
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
// given the coordinates of a point (x,y) computes if the point is inside or on the circle
// centered at origin with radius r. Returns 'true' if it is inside or on the circle, 'false' otherwise.
// DO NOT use the sqrt function here. Just compare to r squared.
bool isInside(double x, double y, double r) {
    //If the sum of squares of x and y coordinates is less than or equal to the square of the radius then the point is inside the circle
    //Or else No
    if((x*x+y*y)<=(r*r))
        return true;
    return false;
}
// given s, the size of the side of a square that is centered at the origin,
// chooses a random coordinates inside the square, and calls isInside function
// to test if the point is inside the circle or not.
bool throwDart(int s) {
   int x, y;
   //The rand function gives random values and when we mod it with s we get values ranging from 0 to s-1
   //-(s/2)+[0---s-1]+1 will give us values from -s/2 to +s/2
   x=(-(s/2)+rand()%s+1);
   y=(-(s/2)+rand()%s+1);
   // assign x and y to two random integers between -s/2 and s/2
   //Call the isInside function and return its output.
   //You do not have to cast x & y to doubles, it is done automatically.
    return isInside(x,y,s/2);
}

int main() {
   srand(333);
   int side; // this is the side of the square and is also our resolution.
   int tries; // this is the number of tries.
   //Ask the user for the size (integer) of a side of the square
     cout<<"Enter the size of the side of a square\n";
   //Get the users input using cin
    cin>>side;
   //Ask the user for the number of tries using cout.
    cout<<"Enter the number of tries\n";
   //Get the users input using cin.
   cin>>tries;
   int inCount = 0; //counter to track number of throws that fall inside the circle
   for(int i = 0; i < tries; ++i) {

//throw a dart using throwDart method and increment the counter depending on its output.
    if(throwDart(side))
        inCount++;

   }
    float pi=4*(float)inCount/(float)tries;
   //Compute and display the estimated value of PI. Make sure you are not using integer division.

    cout<<"The estimated value of Pi is "<<pi<<endl;
   return 0;
}
