#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//Function to get the operator from the file
string get_operator(fstream &infile)
{
    string op;
    infile >> op;
    return op;
}
//Function to get the roman numerals from the file
string get_data(fstream &infile)
{
    string str;
    infile >> str;
    return str;
}
//Function to take the two input numbers and calculate the results
void calc_result(int op1, int op2, string op, int &result)
{
    if (op == "+")
    {
        result = op1 + op2;
    }
    else if (op== "-")
    {
        result = op1 - op2;
    }
    else if (op== "*")
    {
        result = op1 * op2;
    }
    else
    {
        result = op1 / op2;
    }
}
//Function to convert romal to numeral
int roman_to_numeral(string str)
{
    int result = 0;
    for (int i = 0; i < str.length(); ++i)
    {
        if (str[i] == 'M')
            result += 1000;
        else if (str[i] == 'D')
            result += 500;
        else if (str[i] == 'C')
            result += 100;
        else if (str[i] == 'L')
            result += 50;
        else if (str[i] == 'X')
            result += 10;
        else if (str[i] == 'V')
            result += 5;
        else if (str[i] == 'I')
            result += 1;
    }
    return result;
}
//Function to convert number to roman
string numeral_to_roman(int num)
{
    string str = "";
    while (num > 0)
    {
        if (num >= 1000)
        {
            str += "M";
            num -= 1000;
        }
        else if (num >= 500)
        {
            str += "D";
            num -= 500;
        }
        else if (num >= 100)
        {
            str += "C";
            num -= 100;
        }
        else if (num >= 50)
        {
            str += "L";
            num -= 50;
        }
        else if (num >= 10)
        {
            str += "X";
            num -= 10;
        }
        else if (num >= 5)
        {
            str += "V";
            num -= 5;
        }
        else if (num >= 1)
        {
            str += "I";
            num -= 1;
        }
    }
    return str;
}
//Function to print the result
void print_result(int num1,int num2,string str1,string str2,string op,int result,string res_str)
{
    cout<<"The first number is "<<str1<<" ( "<<num1<<" ).\n";
    cout<<"The second number is "<<str2<<" ( "<<num2<<" ).\n";
    cout<<"The operator is "<<op<<endl;
    cout<<"The result is "<<res_str<<" ( "<<result<<" ).\n";
    cout<<"*******************************************\n";
}

int main()
{
    fstream infile;
    infile.open("mp4romanletrdata.txt",ios::in);
    while (infile)
    {

        int num1, num2, result;
        string str1, str2, op,res_str;
        str1 = get_data(infile);
        str2=get_data(infile);
        op=get_operator(infile);
        num1=roman_to_numeral(str1);
        num2=roman_to_numeral(str2);
        calc_result(num1,num2,op,result);
        res_str=numeral_to_roman(result);
        print_result(num1,num2,str1,str2,op,result,res_str);
    }
    infile.close();
    return 0;
}
