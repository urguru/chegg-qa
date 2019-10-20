//I have slightly modified the program so that it would be easier to understand
//And execute the different conditions
//1.First the program checks if any of the files is empty
//1.1 If so then it copies the other file completely to the merged files
//Then it enters the main execution loop that is the last else condition
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{
    fstream inFile1, inFile2, outFile1;
    inFile1.open("maleClients.rtf", ios::in);
    inFile2.open("FemaleClients.rtf", ios::in);
    outFile1.open("MergedClients.rtf", ios::out);
    cout << "File merge processing starting";
    int mClientNumber, fClientNumber;
    string mClientName, fClientName;
    bool atLeastOneFileNotAtEnd = true;
    //I have used the below variables to check which item was last written to the merged file.A modification
    bool inFile1Written = true;
    bool inFile2Written = true;
    //Check if first file is empty.If so write all the data in females file to the merged file
    if (!inFile1)
    {
        while (!inFile2.eof())
        {
            inFile2 >> fClientNumber >> fClientName;
            outFile1 << fClientNumber << " " << fClientName << endl;
        }
    }
    //Check if the second file is empty.If so write the first file to the output file
    else if (!inFile2)
    {
        while (!inFile1.eof())
        {
            inFile1 >> mClientNumber >> mClientName;
            outFile1 << mClientNumber << " " << mClientName << endl;
        }
    }
    //If none of the files are empty in the beginning
    else
    {
        //As long as any of the file has not reached the end
        while (atLeastOneFileNotAtEnd == true)
        {
            //If the individual file has not reached the end then get inside the loop
            if (!inFile1.eof())
            {
                //If a male name was last written in the output file then read the new values for the male
                if (inFile1Written == true)
                {
                    inFile1 >> mClientNumber >> mClientName;
                }
            }
            //The file has reacehed the end so update the atleast one file not found value to false
            else
            {
                atLeastOneFileNotAtEnd = false;
            }
            //Do the same with file 2
            if (!inFile2.eof())
            {
                if (inFile2Written == true)
                {
                    inFile2 >> fClientNumber >> fClientName;
                }
            }
            else
            {
                atLeastOneFileNotAtEnd = false;
            }
            if (atLeastOneFileNotAtEnd == true)
            {
                //check for the one which is smaller and then output to the file
                if (mClientNumber > fClientNumber)
                {
                    outFile1 << fClientNumber << " " << fClientName << endl;
                    //Updating the bool variables which tell from which file was the last name written
                    inFile2Written = true;
                    inFile1Written = false;
                }
                else
                {
                    outFile1 << mClientNumber << " " << mClientName << endl;
                    inFile2Written = false;
                    inFile1Written = true;
                }
            }
        }
       //This is a special condition when both the files are of equal length.Then I found out while debigging that
       //The last names of both the files arent written so this is a hack for that
        if(inFile1.eof() && inFile2.eof())
        {
            if(mClientNumber>fClientNumber)
            {
                outFile1 << fClientNumber << " " << fClientName << endl;
                outFile1 << mClientNumber << " " << mClientName << endl;
            }
            else
            {
                outFile1 << mClientNumber << " " << mClientName << endl;
                outFile1 << fClientNumber << " " << fClientName << endl;
            }
        }
         //After any one file has reacehed the end,add all other names of the file which hasn't reached the end to the output file
         else if (inFile1.eof())
        {
            while (!inFile2.eof())
            {
                inFile2 >> fClientNumber >> fClientName;
                outFile1 << fClientNumber << " " << fClientName << endl;
            }
        }
        else if (inFile2.eof())
        {
            while (!inFile1.eof())
            {
                inFile1 >> mClientNumber >> mClientName;
                outFile1 << mClientNumber << " " << mClientName << endl;
            }
        }
    }
    inFile1.close();
    inFile2.close();
    outFile1.close();
    return 0;
}
