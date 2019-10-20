#include<iostream>
using namespace std;
//This builds a single row with the specified width and mid width and the symbols
void buildRow(char sideSymb,int sideWidth,char midSymb,int midWidth)
{
    for(int i=0;i<sideWidth;++i)
        cout<<sideSymb;
    for(int i=0;i<midWidth;++i)
        cout<<midSymb;
    for(int i=0;i<sideWidth;++i)
        cout<<sideSymb;
    cout<<endl;
}
//This builds a pyramid of the height ptnHeight
void buildPyramid(char sideSymb,char midSymb,int ptnHeight)
{
    for(int i=0;i<ptnHeight;++i)
    {
        buildRow(sideSymb,ptnHeight-i-1,midSymb,2*i+1);
    }
}
//This is used for building a reverse Pyramid
void buildReversePyramid(char sideSymb,char midSymb,int ptnHeight)
{
    for(int i=ptnHeight-1;i>=0;--i)
    {
        buildRow(sideSymb,ptnHeight-i,midSymb,2*i+1);
    }
}
int main()
{
    //The loop breaks when we press q
    while(true)
    {
        char ch;
        cout<<"Please choose one pattern from the list:\n";
        cout<<"r) Row\np) Pyramid\nd) Shallow diamond\nq) Quit\n";
        cin>>ch;
        if(ch=='q')
        {
            cout<<"Bye\n";
            break;
        }
        else if(ch=='r')
        {
            int side,middle;
            cout<<"Width of the sides?\n";
            cin>>side;
            cout<<"Width of the middle?\n";
            cin>>middle;
            buildRow('_',side,'*',middle);
        }
        else if(ch=='p')
        {
            int symbols=0;
            cout<<"Number of symbols on the lowest layer\n";
            cin>>symbols;
            if(symbols%2==0)
            {
                cout<<"The input is not an odd number. Use the closest odd number below "<<symbols<<endl;
            }
            buildPyramid('_','*',(symbols+1)/2);
        }
        //We build a diamond like shape by combining both the pyramid and a reverse pyramid
        else if(ch=='d')
        {
            int middle;
            cout<<"Number of symbols on the middle layer?\n";
            cin>>middle;
            //The pyramid is one step bigger than the reverse pyramid
            //Because we include the middle line in the first pyramid
            buildPyramid('*',' ',(middle+1)/2);
            buildReversePyramid('*',' ',(middle+1)/2-1);
        }
        else
        {
           cout<<"Wrong Choice\n";
        }
    }
}
