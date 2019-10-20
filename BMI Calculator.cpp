#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;
//This function returns whether the BMI is of underweight,overweight,normal,....
string ret_type(float bmi)
{
    if(bmi<=18.5)
        return "Underweight";
    if(bmi<25)
        return "Normal Weight";
    if(bmi<30)
        return "Overweight";
    return "Obesity";
}
int main()
{
    //The shortforms are all used as mentioned in the question
    float weight,height,bmi;
    int age,rhr,mhr,hrr;
    cout<<"BMI and Karvonen Calculator\n\n";
    cout<<"Please enter the following values for the user . . . \n\n";
    cout<<"Height in inches: ";
    cin>>height;
    cout<<"Weight in pounds: ";
    cin>>weight;
    cout<<"Age: ";
    cin>>age;
    cout<<"Resting heart rate: ";
    cin>>rhr;
    cout<<"\n\nResults . . . \n\n";
    //One pound is 0.453592 kilograms and one inch is 2.54 cm and so we mulitply by 0.01 to convert it into meter
    //BMI=weight(in kg)/height^2(in mtrs)
    bmi=(weight*0.453592)/(height*height*2.54*2.54*0.01*0.01);
    //Outputting the result
    cout<<"Your BMI is: "<<setprecision(4)<<bmi<<" -- "<<ret_type(bmi)<<endl;
    //As mentioned in the question we get the different formulas
    mhr=220-age;
    hrr=mhr-rhr;
    //Then we calculate the max heart rate using a for loop and the given formula and then print them
    cout<<"Exercise Intensity Heart Rates\n";
    cout<<"Intensity     Max Heart Rate\n";
    for(int i=55;i<=95;i=i+5)
    {
        int mtz=hrr*0.01*i;
        int res=mtz+rhr;
        cout<<i<<"%    --    "<<res<<endl;
    }
    cout<<"Press any key to end the program\n";
    getchar();
}
