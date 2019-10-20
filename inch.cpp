#include<iostream>
using namespace std;
int main()
{
    //Using the n for input and the result variable for the result
    float n,res;
    //use the character c for input of the character
    char c;
    cout<<"Enter the input\n";
    cin>>n>>c;
    //If the user input is inches then we need to convert the result to centimeters
    //1 inch =2.54 cm
    if(c=='i')
    {
        res=n*2.54;
        //Print the result
        cout<<n<<" inches = "<<res<<" cms\n";
    }
    //Second Condition
    else if(c=='c')
    {
        //here we divide the centimeters by 2.54
        res=n/2.54;
        cout<<n<<" cms = "<<res<<" inches\n";
    }
    else
    {
        //If the user gives wrong input
        cout<<"Wrong Input\n";
    }
    return 0;
}
