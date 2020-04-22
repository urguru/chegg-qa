#include<iostream>
#include<math.h>
#include<string>
#include<iomanip>
#include<cmath>
using namespace std;

float distance(float x1,float y1,float x2,float y2)
{
    return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}

float radius(float x1,float y1,float x2,float y2)
{
     return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
float circumference(float r)
{
    return 2*r*M_PI;
}
float area(int r)
{
    return M_PI*r*r;
}
int compare(float x1,float y1,float r,float x2,float y2)
{
    float dist=distance(x1,y1,x2,y2);
    int res=1;
    if(dist<r)
        res=-1;
    else if(dist==r)
        res=0;
    else
        res=1;
    return res;
}
void get_point(const string& prompt,float& x_coord,float& y_coord)
{
    cout<<prompt;
    cin>>x_coord>>y_coord;
}
int main()
{
    //xc-x coordinate of the center of the circle
    //yc-y coordinate of the center of the circle
    //xp,yp= x,y coordinates of a point on a circle
    //r is the radius of the circle
    //xt,yt= a normal point in a plane
    float xc,yc,xp,yp,xt,yt,r;
    //getting the values from the user through the functions
    get_point("Enter the coordinates for the center of a circle (X Y): ",xc,yc);
    get_point("Enter the coordinates for a point on the circle (X Y): ",xp,yp);
    get_point("Enter the coordinates for a point to check (X Y): ",xt,yt);
    r=radius(xc,yc,xp,yp);
    cout<<endl;
    //Setting the precision to 3 digits after the decimal point
    cout.precision(3);
    cout<<fixed;
    //Printing the result to the console
    cout<<left<<setw(20)<<"radius:"<<setw(10)<<right<<r<<endl;
    cout<<left<<setw(20)<<"diameter:"<<setw(10)<<right<<2*r<<endl;
    cout<<left<<setw(20)<<"circumference:"<<setw(10)<<right<<circumference(r)<<endl;
    cout<<left<<setw(20)<<"area:"<<setw(10)<<right<<area(r)<<endl;

    //The final result to check if the point is inside the circle or on the circle or outside the circle
    int res=compare(xc,yc,r,xt,yt);
    if(res==-1)
    {
        cout<<"\npoint is inside the circle\n";
    }
    else if(res==0)
    {
        cout<<"\npoint is on the circle\n";
    }
    else
    {
        cout<<"\npoint is outside the circle\n";
    }
    return 0;
}
