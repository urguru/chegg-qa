//I have tried to make the program interactive so that you get to know that the code is working correctly
//I have added some extra function like print which prints all the data in the linked-list node
//By default the data at the first node is 0
//Hope you understand everything...In case you dont please feel free to ask questions in the comments
#include <iostream>
#include <cstdlib>
#include <cassert>

using namespace std;

class Node {
    public:
        typedef int nodeDatatype;

        Node(const nodeDatatype& initData = nodeDatatype(),Node* initLink = NULL)
        {
            //Initially the program added only one item and later on the code didnt do anything
            data = initData;
            if(initLink==NULL)
            {
                link = initLink;
            }
            //So the code below takes care when we add 2nd 3rd 4th and so on nodes to the list
            else
            {
                //It creates a node and then appends it to the last link of the head that is null
               Node* temp=new Node();
               Node* curr=initLink;
               //This loops till the end of the already existing head
               while(curr->getLink()!=NULL)
               {
                   curr=curr->getLink();
               }
               //And then data and links get added
               curr->setLink(temp);
               temp->setData(initData);
               temp->setLink(NULL);
            }
        }

        void setData(const nodeDatatype& new_data)
        {
            data = new_data;
        }
        void setLink(Node* new_link)
        {
            link = new_link;

        }

        nodeDatatype getData()
        {
            return data;

        }
        //This should return node* and it shouldnot return a constant link
        Node* getLink()
        {
            return link;

        }

    private:
        nodeDatatype data;
        Node* link;
};

bool isValid(Node* head, size_t pos);

size_t length(Node* head);

Node* listLocate(Node* head, size_t position);
const Node* listLocate(const Node* head, size_t pos);

Node* listSearch(Node* head, const Node::nodeDatatype& target);
const Node* listSearch(const Node* head, const Node::nodeDatatype& target);


//check if the position is valid
bool isValid(Node* head, size_t pos)
{
    //We already have a length function so if the position is more than length then its not valid
    if(pos<length(head))
        {
            return true;
        }
    else
        {
            return false;
        }

}
//returns the length of the list
size_t length(Node* head)
{
   Node* curr;
   size_t count = 0;
   for(curr = head; curr != NULL; curr=curr->getLink()){
       ++count;
   }
   return count;
}

//returns the Node at position i (locate toolkit)
Node* listLocate (Node* head, size_t position)
{
    Node* curr;
    curr=head;
    //This loops until one less than the position and then returns the node address at that position
    for(int i=0;i<position;++i)
    {
        curr=curr->getLink();
    }
    return curr;
}
//search
Node* listSearch(Node* head, const Node::nodeDatatype& target)
{
    Node* curr;
    curr=head;
    //Loops till the end
    for(curr=head;curr!=NULL;curr=curr->getLink())
    {
        //Checks if the data is equal to the nodes data
        if(curr->getData()==target)
        {
            return curr;
        }
    }
    //Else i'm just returning a null value
    return NULL;
}
//Function to print th value
void printNodes(Node* head)
{
    Node* curr=head;
    while(curr!=NULL)
    {
        cout<<curr->getData()<<" ";
        curr=curr->getLink();
    }
}
//From here its seld explanatory
int main()
{
    Node* head;
    //The first node defaults to the value zero
    Node linkedlist(0);
    head=&linkedlist;
    cout<<"Program to manipulate a linked list using nodes and classes\n";

    cout<<"1.ADD An Element\n";
    cout<<"2.Check if a position is valid\n";
    cout<<"3.Find the length of the linkedList\n";
    cout<<"4.Get the node at a position and change its data\n";
    cout<<"5.Get the node with target data\n";
    cout<<"6.Print the linked list\n";
    int choice;
    while(true)
    {
        cout<<"Select from the following choices\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {  int n;
               cout<<"Enter the number you want to add\n";
               cin>>n;
               Node newNode(n,head);
               break;
            }
            case 2:
            {
               int pos;
               cout<<"Enter the position that you want to check\n";
               cin>>pos;
               if(isValid(head,pos))
               {
                   cout<<"The position is valid\n";
               }
               else
               {
                   cout<<"The position is not valid\n";
               }
               break;
            }
            case 3:
            {
                    cout<<"The length of the linkedlist is"<<length(head)<<" \n";
                    break;
            }
            case 4:
            {
                int pos,data;
                cout<<"Enter the position where you want to change the data\n";
                cin>>pos>>data;
                Node* temp=listLocate(head,pos);
                temp->setData(data);
                break;
            }
            case 5:
            {
                int data_1,data_2;
                cout<<"Enter the data to be searched and changed\n";
                cin>>data_1>>data_2;
                Node* temp=listSearch(head,data_1);
                temp->setData(data_2);
                break;
            }
            case 6:
            {
                cout<<"The linked list is ";
                printNodes(head);
                cout<<endl;
                break;
            }
            case 7:
            {
                cout<<"Exiting\n";
                exit(0);
            }
            default:
            {
                cout<<"Wrong Choice\n";
            }
        }
    }

}
