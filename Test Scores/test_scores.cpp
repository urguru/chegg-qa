#include<iostream>
#include<fstream>
#include<string>
using namespace std;
//Function to read input from the file
void read_input(fstream &infile,string names[],int scores[][5])
{
    int counter=0;
    infile.seekg(0, ios::beg);
    while(infile)
    {
        infile>>names[counter];
        for(int i=0;i<5;++i)
        {
            infile>>scores[counter][i];
        }
        counter++;
    }

}
//Function to calculate the average of of all the users
void calculate_average(int scores[][5],float average[],int counter)
{
    for(int i=0;i<counter;++i)
    {
        float total=0;
        for(int j=0;j<5;++j)
            total+=scores[i][j];
        average[i]=total/5;
    }
}
//Function to display the result
void display_result(string names[],float average[],int counter)
{
    float class_avg=0;
    cout<<"The results\n";
    for(int i=0;i<counter;++i)
    {
        cout<<names[i]<<"  Average = "<<average[i]<<endl;
        class_avg+=average[i];
    }
    class_avg=class_avg/counter;
    cout<<endl<<"The class average is = "<<class_avg<<endl;
}

int main()
{
    fstream infile;
    int no_of_students=0;
    string line;
    //The file is opened first time to count the number of students and then closed
    infile.open("A2.txt",ios::in);
    while (getline(infile, line))
        no_of_students++;
    infile.close();
    //The file is opened second time to read the data
    infile.open("A2.txt",ios::in);
    string names[no_of_students];
    int scores[no_of_students][5];
    float average[no_of_students];
    read_input(infile,names,scores);
    calculate_average(scores,average,no_of_students);
    display_result(names,average,no_of_students);
    return 0;
}
