#include<iostream>
#include<fstream>
#include<string>
#include<cassert>
using namespace std;
string Convert(string & line);
int main()
{
    ifstream myIn;
    string line;
    string word;
    myIn.open("Acronym.dat");
    assert(myIn);

    while(getline(myIn,line))
    {
        word=Convert(line);
        cout<<line<<"->"<<word<<endl;
    }
    myIn.close();
    return 0;
}
string Convert(string &line)
{
    string word=" ";
    word+=toupper(line[0]);
    for(int i=0;i<line.length();++i)
    {
        if(line[i]==' ')
        {
            word+=toupper(line[i+1]);
        }
    }
    return word;
}
