#include <iostream>
using namespace std;

string morseEncoder(char x)
{
     if(isalpha(x))
        x=tolower(x);
    switch (x)
    {
        case 'a':
            return ".-";
        case 'b':
            return "-...";
        case 'c':
            return "-.-.";
        case 'd':
            return "-..";
        case 'e':
            return ".";
        case 'f':
            return "..-.";
        case 'g':
            return "--.";
        case 'h':
            return "....";
        case 'i':
            return "..";
        case 'j':
            return ".---";
        case 'k':
            return "-.-";
        case 'l':
            return ".-..";
        case 'm':
            return "--";
        case 'n':
            return "-.";
        case 'o':
            return "---";
        case 'p':
            return ".--.";
        case 'q':
            return "--.-";
        case 'r':
            return ".-.";
        case 's':
            return "...";
        case 't':
            return "-";
        case 'u':
            return "..-";
        case 'v':
            return "...-";
        case 'w':
            return ".--";
        case 'x':
            return "-..-";
        case 'y':
            return "-.--";
        case 'z':
            return "--..";
        case ' ':
            return " ";
    }
}

void morse(string s)
{
    for (int i = 0;i<s.size(); i++)
    {
        cout << morseEncoder(s[i]);
        cout << endl;
    }
}
int main()
{
    string s;
    cout<<"Enter the string that you want to convert into Morse code\n";
    getline(cin,s);
    morse(s);
    return 0;
}
