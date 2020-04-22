//This program is similar to extracting the maximum value from a stack in o(1) time
//Here we include another stack called as maxstack which stores the values of the maximum element on the top of the stack always
//The items below that are the items that are smaller than the one on the top
//They become the biggest element in case if the biggest element gets removed
#include<bits/stdc++.h>
using namespace std;
//The cards stack stores the values of the cards in it
stack<int> cards;
//Maxstack stores the values of the maximum values
stack<int> maxstack;
//This is a modified push function
void push(int val)
{
	cards.push(val);
	//If the maxstack is empty them we insert the first value in the maxstack
	if(maxstack.empty())
    {
        maxstack.push(val);
    }
    //Else we check if the value being inserted is greater than the greatest value already present
    //And if it is true then we insert this value to the max stack
	else if(maxstack.top()<val)
	{
		maxstack.push(val);
	}
}
//This function returns the maximum value
int returnmax()
{
	return maxstack.top();
}
//This function emptys the stacks
void start()
{
    while(!cards.empty())
    {
        cards.pop();
    }
    while(!maxstack.empty())
    {
        maxstack.pop();
    }
}
//The pop function is also a modified version of the stack pop function
void pop()
{
	int var;
	//We can only pop if there are cards inside
	if(!cards.empty())
	{
	    //We check if the value being popped is the max value
	    //If it is true then we pop it from the max stack also
		var=cards.top();
		if(maxstack.top()==var)
		{
			maxstack.pop();
		}
		cards.pop();
	}
}
int main()
{
    int t;
    cin>>t;
    //Repeat for t test cases
    while(t--)
    {
        int n;
        //Take input of the number of cards initially
        cin>>n;
        int temp;
        //Empty the stacks
        start();
        //Push all the cards into the cards stack
        for(int i=0;i<n;++i)
        {
            cin>>temp;
            push(temp);
        }
        int trials;
        //Input the number of operations we will be doing on them
        cin>>trials;
        char c;
        //Execute all the operations
        while(trials--)
        {
            cin>>c;
            if(c=='m')
            {
                cout<<returnmax()<<endl;
            }
            else if(c=='r')
            {
                pop();
            }
            else
            {
                cin>>temp;
                push(temp);
            }

        }
    }
}
