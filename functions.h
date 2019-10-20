#include<iostream>
#include<stack>
using namespace std;
//Checks if the string is an operator
bool isOperator(string x) {
  if(x=="+" || x=="-" || x=="*" || x=="/")
    return true;
  return false;
}
//The main logic
string prefix_to_infix(string pre_exp)
{
    stack<string> s;
    int length = pre_exp.size();
    for (int i = length - 1; i >= 0; i--)
    {
        string str="";
        //This is to remove the whitespaces from the input
        while( i>=0 && pre_exp[i]!=' ')
        {
            str=pre_exp[i]+str;
            i--;
        }
        //We proceed with the code only if we encountered a non whitespace string
        if(str!="")
        {
            if (isOperator(str))
            {
                //If the size of the stack is less than two then we exit the function with an error because we need to operands to join the operator
                if(s.size()<2)
                    return "Error";
              // pop two operands from stack
              //If nay of the string is an operator then thats an error
              string op1 = s.top();
              if(isOperator(op1))
                return "Error";
              s.pop();
              string op2 = s.top();
              if(isOperator(op2))
                return "Error";
              s.pop();

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
     //If there are more than one items remaining in the stack even after the end of the loop then its an error
  if(s.size()>1)
    return "Error";
  // Stack now contains the Infix expression
  string final_res=s.top();
  //WE remove the initial brackets
  final_res=final_res.substr(1,final_res.size()-2);
  return final_res;
}
