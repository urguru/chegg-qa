#include<iostream>
#include <cmath>

using namespace std;

// declear constants for the array elements
const int NUM_NODES = 10; // constant for number of nodes
const int NUM_ROWS = 20; // const variable to read the number of rows
int Arr[NUM_NODES][NUM_ROWS]; // declear 2D array with specified size. (Array representation)
int Adj[NUM_NODES][NUM_ROWS]; // declear adj matrix.

//declear function prottype in order to print out a comma
void Print_Comma(int[], int);

int main()
{
   // local variables.
   int numNodes; // variable to hold the user's input for number of nodes
   int numRows; // variable to hold the number of rows for the program
   int x, y; // variables to take the users input (i.e. x for nodes and y for pointers)
   int node, pointer,pointer1; // to hold the data of node and the pointers.
   int counter; // variable to count howmany 1's are in the matrix

   // output instruction for the user to enter the data
   cout << "Please input the number of nodes: ";
   cin >> numNodes;
   cout << "Please input the number of rows in the matrix: ";
   cin >> numRows;
   cout << "Please input the array-pointer representation of the graph:" << endl;

   // initilize all the elements of the adj matrix to 0, number of Nodes determines the matrix size.
   for (int i = 0; i < numNodes; i++)
   {
       for (int j = 0; j < numNodes; j++)
       {
           Adj[i][j] = 0;
       }
   }


   // get the input from the user in math format starting i with 1
   for (int i = 1; i <= numRows; i++)
   {
       cin >> x; // store the value of nodes in x
       cin >> y; // store the value of pointers in y
       Arr[i][0] = x;
       Arr[i][1] = y;
   }

   // store all the elements in c++ format where i begains with 0
   for (int i = 0; i < numRows; i++)
   {
       Arr[i][0] = Arr[i + 1][0] - 1;
       Arr[i][1] = Arr[i + 1][1] - 1;
   }
   // just a sample output of array matrix
   for (int i = 0; i < numRows; i++)
   {
       for (int j = 0; j < 2; j++)
       {
           cout << Arr[i][j] << " ";
       }
       cout << endl;
   }
   cout << endl; // create extra space

// create adjancency matrix
   for (int i = 0; i < numNodes; i++)
   {
       pointer = Arr[i][1];
       node=Arr[i][0];
       while (pointer != -1)
       {
           int temp=Arr[pointer][0];
           Adj[node][temp]=1;
           node=Arr[pointer][0];
           pointer=Arr[pointer][1];
       }

   }
   cout << endl; // extra space

   // output the adj matrix
   cout << "The adjacency matrix is:" << endl;
   for (int i = 0; i < numNodes; i++)
   {
       for (int j = 0; j < numNodes; j++)
       {
           cout << Adj[i][j] << " ";
       }
       cout << endl;
   }
   cout << endl; // extra space

   // output the isolated nodes
   cout << "The isolated nodes are: " << numNodes << endl;
   cout << "The degree of each node (in the form node/degree) is:" << endl;

   cout << endl; // for extra space

   // run a for loop for isolated nodes
   for (int i = 0; i < numNodes; i++)
   {
       counter = 0;
       for (int j = 0; j < numNodes; j++)
       {
           if (Adj[i][j] == 1)
           {
               counter++;
           }
       }
       cout << i+1 << '/' << counter << endl;
   }

   cout << endl; // extra space.

   // output the adjacent nodes as per requirments.
   cout << "The nodes adjacent to each node (in the form node:list of adjacent nodes) is:" <<endl;

   // run for loop to check the nodes
   for (int i = 0; i < numNodes; i++)
   {
       cout << i+1 << ':';
       for (int j = 1; j <= numNodes; j++)
       {
           if (Adj[i][j] == 1)
           {

               cout << j;
           }
       }
       cout << endl;
   }
   return 0;
}

// function defination to print comma
void Print_Comma(int Adj[], int k)
{

}

