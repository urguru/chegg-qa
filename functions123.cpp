#include<iostream>
#include<stack>
using namespace std;
bool isOperator(string x) {
  if(x=="+" || x=="-" || x=="*" || x=="/")
    return true;
  return false;
}
string prefix_to_infix(string pre_exp)
{
    stack<string> s;
    int length = pre_exp.size();
    for (int i = length - 1; i >= 0; i--)
    {

        string str="";
        while( i>=0 && pre_exp[i]!=' ')
        {
            str=str+pre_exp[i];
            i--;
        }
        if(str!="")
        {
            if (isOperator(str))
            {

                if(s.size()<2)
                    return "Error";
              // pop two operands from stack
              string op1 = s.top();   s.pop();
              string op2 = s.top();   s.pop();

              // concat the operands and operator
              string temp = "(" + op1 + str + op2 + ")";

              // Push string temp back to stack
              s.push(temp);
            }

            // if symbol is an operand
            else
            {

              // push the operand to the stack
              s.push(str);
            }

        }
     }
  // Stack now contains the Infix expression
  return s.top();
}
int main()
{
    cout<<prefix_to_infix("* - 5 6 7");
}
