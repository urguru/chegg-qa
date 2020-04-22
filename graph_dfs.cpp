#include<iostream>
#include<stdlib.h>  //This is used for exit function which is used to exit from the program in case of wrong output
#include<fstream> //This is used for file
using namespace std;
//The depth first function
//The arr is the adjacency matrix
//The n is the number of the nodes
//Possible has the boolean values for the nodes which are reachable from the source
//start is the source node
void dfs(bool **arr,int n,bool possible[],int start)
{
    //we iterate through all the nodes
    for(int i=0;i<n;++i)
    {
        //We check if there exists a link between the node and the source and also if its not already covered
        //If its true then we call dfs on the node and include it in the possible list
        //If its not true then we don't do anything
        if(arr[start][i] && !possible[i])
        {
            possible[i]=true;
            dfs(arr,n,possible,i);
        }
    }
}
int main()
{
    //We open the file for reading
    fstream infile("graph.txt",ios::in);
    int n;
    //Taking the input from the first line
    infile>>n;
    bool possible[n];
    //creating a two dimensional array for storing the adjacency values
    bool **arr=new bool*[n];
    for(int i=0;i<n;++i)
    {
        possible[i]=false;
        arr[i]=new bool[n];
    }
    //reading all the inputs
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            infile>>arr[i][j];
        }
    }
    //Checking the diagonal elements
    for(int i=0;i<n;++i)
    {
        if(arr[i][i]!=0)
        {
            cout<<"The diagonal elements are not zero\nExiting from the program\n";
            exit(0);
        }
    }
    //Checking if the matrix is symmetric
    for(int i=0;i<n;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            if(arr[i][j]!=arr[j][i])
            {
                cout<<"The matrix is not symmetric\nExiting from the program\n";
                exit(0);
            }
        }
    }
    cout<<"Enter the starting node\n";
    int start;
    cin>>start;
    possible[start-1]=true;
    dfs(arr,n,possible,start-1);
    cout<<"The nodes that can be reached from the given source are : ";
    for(int i=0;i<n;++i)
    {

        if(possible[i])
        {
            cout<<i+1<<" ";
        }
    }
    cout<<"\nThank You\nExiting the Program\n";
}
