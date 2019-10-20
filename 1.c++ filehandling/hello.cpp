//Note-While writing input to the names.txt if you copy them from somewhere else
//You might not get accurate results because the font-style and few other things may unknowingly get copied and you might get some extra characters
//So to check you should better type the names on your own and verify... :) :) Happy Coding
#include<iostream>
/*For file handling, you can be specific too.
For reading from a file use ifstream and for writing to a file use ofstream*/
#include<fstream>
/*For string datatype in this program*/
#include<string>
using namespace std;

int main()
{
    //The variable for the file in the program
    fstream read_file;
    //Using the open function to open a file
    //Remember that the file should be in the same location or the folder where your code exists
    //Or else you have to give the full path of the file
    //And dont forget to include the extension of the file type
    read_file.open("names.txt",ios::in);
    //Since the highest limit mentioned in the question is 15 I have taken 15 variables
    string names[15];
    //The variable for iterating through the names and keeping a count of them
    int count_names=0;
    //This if condition is used to check if the file has been properly loaded or not
    if(!read_file)
    {
        cout<<"Unable to open the file"<<endl;
    }
    //The normal program gets executed if the file is loaded
    else
    {
        //This while loop runs until the end of the file
        while(!read_file.eof())
            {
                //Since every single name is on one line and contains four words we need to read four words
                //from each line,so I have declared four string variables and read them
                string s1,s2,s3,s4;
                read_file>>s1>>s2>>s3>>s4;
                //Since the program asks us to convert the first letter of all the words to uppercase
                //I have subtracted ASCII value of 32 from the first letter of the word so that we get capital letter
                s1[0]=s1[0]-32;
                s2[0]=s2[0]-32;
                s3[0]=s3[0]-32;
                s4[0]=s4[0]-32;
                //The below lines have the main logic of the program
                //If we analyse the names in the files then there are only two possibilities
                //The word surname or lastname can appear either as the first word or the third word
                //Surname/LastName last_name first_name middle_name : 1st Case
                //first_name middle_name Surname/LastName last_name: 2st Case
                //So using this idea I have appended the names accordingly and created the full name for the person
                if(s1=="Lastname"||s1=="Surname")
                {
                    names[count_names]=s2 + ", " +s3+" "+s4;
                }
                else if(s3=="Lastname"||s3=="Surname")
                {
                    names[count_names]=s4+", "+s1 +" "+s2;
                }
                //This variable keeps the count of the names so far
                count_names++;
            }
         //The for loop below is used to sort the names in their alphabetical orders using a basic selection sort
        for(int i=0;i<count_names;++i)
        {
            for(int j=i+1;j<count_names;++j)
            {
                string temp;
                if(names[i]>names[j])
                {
                    //This is an inbuilt function that takes two values and then swaps them
                    //If this doesn't work for in your compiler,then use a temporary variable and then swap them
                    swap(names[i],names[j]);
                }
            }
        }
        //This loop finally prints all the names to the console out
        for(int i=0;i<count_names;++i)
        {
            cout<<names[i]<<endl;
        }
    }
    //Finally we close the file that we opened
    read_file.close();
    return 0;
}
