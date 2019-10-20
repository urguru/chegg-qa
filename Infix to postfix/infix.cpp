#include<iostream>
#include<stack>
using namespace std;
//This function is used to calculate the precedence of the operators
int precedence(char c)
{
    //The multiply divide and the modulous have the highest precedence
    if(c=='/'||c=='*'||c=='%')
    {
        return 2;
    }
    //The add and subtract have the next lower precedence
    else if(c=='+'||c=='-')
    {
        return 1;
    }
    //Any other value is returned with a negative value
    else
        return -1;
}

void infix_to_postfix(char *exp)
{
    //We are using the stl library class of stack
    stack<char> container;
    int i=0,j=0;
    char output[100];
    //As long as the expression exists
    while(exp[i]!='\0')
    {
        if(isdigit(exp[i]))
        {
            output[j]=exp[i];
            j++;
            i++;

        }
        else if(exp[i]=='(')
        {
            container.push(exp[i]);
            i++;
        }
        else if(exp[i]==')')
        {
            while(!container.empty() && (container.top()!='('))
            {
                char s=container.top();
                container.pop();
                output[j]=s;
                j++;
            }
            if(container.top()=='(')
            {
                container.pop();
            }
            i++;
        }
        else
        {
            while (!container.empty() && (precedence(exp[i])<= precedence(container.top())))
            {
                char c=container.top();
                container.pop();
                output[j]=c;
                j++;
            }
            container.push(exp[i]);
            i++;
        }
    }
    while(!container.empty())
    {
        output[j]=container.top();
        container.pop();
        j++;
    }
    output[j]='\0';
    cout<<output;
}
int main()
{
    //We have not used a string instead we have used a character array to read the input
    char choice='y';
    cout<<"This is a program to convert an expression from infix to postifix\n";
    while(choice!='q')
    {
        char expr[100];
        cout<<"Enter the expression\n";
        cin>>expr;
        cout<<"The postifx evaluation of the expression is ";
        infix_to_postfix(expr);
        cout<<"\nDo you want to continue.Press q to quit\n";
        cin>>choice;
    }
    return 0;
}
