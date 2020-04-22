#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
    //Th name of the input file is grades.txt
    fstream infile("grades.txt",ios::in);
    //We write the output to the file sorted_grades.txt
    fstream outfile("sorted_grades.txt",ios::out);
    //I have declared 1000 variables i.e. around 1000 students
    int grades[1000],total_number=0;
    //The float variable is for calculating the total grades
    float total_marks=0;
    char names[1000][20];
    //As long as there is input available read and store the values into the array
    while(infile)
    {
        infile>>names[total_number]>>grades[total_number];
        total_marks+=grades[total_number];
        total_number++;
    }
    //Then sort the students using thier grades
    for(int i=0;i<total_number;++i)
    {
        for(int j=0;j<total_number;++j)
        {
            if(grades[i]<grades[j])
            {
                swap(grades[i],grades[j]);
                swap(names[i],names[j]);
            }
        }
    }
    //The total_number count is one more than the actual count because when we read the file it reads a last line which is empty and even that gets included into the array
    //So we reduce the total_number by 1 while finding the average
    //Print the average
    cout<<"The average grade of the class is "<<total_marks/(total_number-1);
    //We start from 1 as the first value is from the empty line from the input file which doesnt count
    //Output the data to the output file
    for(int i=1;i<total_number;++i)
    {
        outfile<<left<< setw(20)<<names[i]<<setw(5)<<grades[i]<<endl;
    }
    infile.close();
    outfile.close();
    return 0;
}
