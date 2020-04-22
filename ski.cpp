//fstream is for file handling and iomanip is for output formatting
#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
//As mentioned in the question the class has two seven sized arrays having the dates and the bases
class ski
{
    int dates[7];
    float bases[7];
public:
    //Initially we declare all the bases values as zero and we assign the dates for each of the date variable from the array
    ski()
    {
        for(int i=0;i<7;++i)
        {
            dates[i]=12+i;
            bases[i]=0;
        }
    }
    //If date and the base value are given then we can update them
    void update(int date,float value)
    {
        dates[date-12]=date;
        bases[date-12]=value;
    }
    //WE sort the values using basic selection sort technique
    void sort_values()
    {
        for(int i=0;i<7;++i)
        {
            for(int j=0;j<7;++j)
            {
                if(bases[i]<bases[j])
                {
                    swap(bases[i],bases[j]);
                    swap(dates[i],dates[j]);
                }
            }
        }
    }
    //We print the data at the end
    void print_data()
    {
        cout<<"Snow Report December 12-18\n";
        cout<<setw(10)<<"Date"<<setw(10)<<"Base"<<endl;
        for(int i=0;i<7;++i)
        {
            cout<<setw(8)<<dates[i]<<"   "<<setw(10)<<bases[i]<<endl;
        }
    }
};
int main()
{
    //We create an object of the class ski
    ski company;
    //We open the file for reading
    fstream infile("decinches.txt",ios::in);
    //Then we input the values into the arrays of the class
    for(int i=0;i<7;++i)
    {
        int day;
        float value;
        infile>>day>>value;
        company.update(day,value);
    }
    //WE sort the values and then print them
    company.sort_values();
    company.print_data();
    infile.close();
}
