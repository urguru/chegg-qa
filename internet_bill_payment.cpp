#include<bits/stdc++.h>
using namespace std;
//Returns the bill when the choice is A
float package_a(int hours)
{
    //If the number of hours are less than 10 we need not include the extra hours cost
    if (hours<=10)
        return hours*9.95;
    return 10*9.95+(hours-10)*2.25;
}
//Returns the bill when the choice is B
float package_b(int hours)
{
    if (hours<=20)
        return hours*14.95;
    return 20*14.95+(hours-20)*1.25;
}
//Returns the bill when the choice is C
float package_c(int hours)
{
    return 19.95;
}
int main()
{
    //Input File
    //Here we are considering there are multiple input accounts in a single file
    fstream infile("itserv.dat",ios::in);
    //read the data as long as the input exists
    while(!infile.eof())
    {
        int account_no,hours;
        char service_code;
        float total_cost;
        bool wrong=false;
        //read the input for an individual account
        infile>>account_no>>service_code>>hours;
        //If the service code is invalid
        if(!(service_code=='A' || service_code=='B' || service_code=='C'))
        {
            wrong=true;
            cout<<"Account Number :"<<account_no<<endl;
            cout<<"Service Code :"<<service_code<<endl;
            cout<<"The service code entered is invalid\n";
        }
        //If the number of hours are invalid
        if(hours>744)
        {
            wrong=true;
            cout<<"Account Number :"<<account_no<<endl;
            cout<<"Service Code :"<<service_code<<endl;
            cout<<"Hours :"<<hours<<endl;
            cout<<"The number of hours entered is incorrect\n";
        }
        //If the input details are correct
        if(wrong==false)
        {
            char file_name[50];
            //Since there are to be multiple bill files for multiple accounts I have added the account number at the end of the file to differentiate all the files
            sprintf(file_name,"bill_%d.dat",account_no);
            fstream outfile(file_name,ios::out);
            outfile<<"Account Number :"<<account_no<<endl;
            outfile<<"Service Code :"<<service_code<<endl;
            outfile<<"Hours :"<<hours<<endl;
            float a,b,c;
            a=package_a(hours);
            b=package_b(hours);
            c=package_c(hours);
            //Printing to the files
            if(service_code=='A')
            {
                outfile<<"Your bill is $"<<a<<endl;
                if(a-b>0)
                    outfile<<"You would have saved $"<<a-b<<" on purchasing Package B\n";
                if(a-c>0)
                    outfile<<"You would have saved $"<<a-c<<" on purchasing Package C\n";
            }
            else if(service_code=='B')
            {
                outfile<<"Your bill is $"<<b<<endl;
                if(b-c>0)
                    outfile<<"You would have saved $"<<b-c<<" on purchasing Package C\n";
            }
            else
            {
                outfile<<"Your bill is $"<<c<<endl;
            }
        }
    }
}
