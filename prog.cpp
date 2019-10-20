#include"functions.h"
int main()
{
    string str;
    while(true)
    {
    cout<<"\nEnter a postfix expression\n";
    getline(cin,str);
    if(str=="exit")
        return 0;
    cout<<prefix_to_infix(str);
    }
}
