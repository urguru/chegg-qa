#include<iostream>
#include<fstream>
using namespace std;
template<class ItemType>
struct NodeType
{
    ItemType item;
    NodeType<ItemType>* next;
};
template<class ItemType>
class UList
{
public:
    UList();
    UList(const UList &x);
    bool IsThere(ItemType item);
    void Insert(ItemType item);
    void Delete(ItemType item);
    void Print();
    int Length();
private:
    NodeType<ItemType>* listPtr;
};
//Constructor
template<class ItemType>
UList<ItemType>::UList()
{
    listPtr=NULL;
}
//Copy Constructor
template<class ItemType>
UList<ItemType>::UList(const UList<ItemType> &x)
{
   NodeType<ItemType>* temp;
   temp=x.listPtr;
   NodeType<ItemType>* head=NULL;
   while(temp!=NULL)
   {
        NodeType<ItemType>* node=new NodeType<ItemType>();
        node->item=temp->item;
        node->next=NULL;
        temp=temp->next;
        if(head==NULL)
        {
            head=node;
            listPtr=head;
        }
        else
        {
            head->next=node;
            head=head->next;
        }
   }
}
//Function to check if an item exists in the linked list
template<class ItemType>
bool UList<ItemType>::IsThere(ItemType item)
{
    NodeType<ItemType>* temp=listPtr;
    while(temp!=NULL)
    {
        if(temp->item==item)
            return true;
        temp=temp->next;
    }
    return false;
}
//Function to add an item to the linked list
template<class ItemType>
void UList<ItemType>::Insert(ItemType item)
{
    NodeType<ItemType>* temp=new NodeType<ItemType>();
    temp->item=item;
    temp->next=NULL;
    if(listPtr==NULL)
    {
        listPtr=temp;
        return;
    }
    else
    {
        NodeType<ItemType>* head=listPtr;
       while(head->next!=NULL)
       {
           head=head->next;
       }
       head->next=temp;
    }
}
//Function to delete an item from the linked list
template<class ItemType>
void UList<ItemType>::Delete(ItemType item)
{
    if(listPtr==NULL)
        return;
    else if(listPtr->next==NULL && listPtr->item==item)
    {
        listPtr=NULL;
        return;
    }
    else if(listPtr->next==NULL)
        return;
    else
    {
        NodeType<ItemType>* head=listPtr;
        NodeType<ItemType>* prev=listPtr;
        while(head->item!=item && head->next!=NULL)
        {
            prev=head;
            head=head->next;
        }
        if(head->item==item)
        {
            prev->next=head->next;
            delete(head);
        }
    }
}
//Function to print all the items in the linked list
template<class ItemType>
void UList<ItemType>::Print()
{
    NodeType<ItemType>* head=listPtr;
    while(head->next!=NULL)
    {
        cout<<head->item<<" ";
        head=head->next;
    }
    cout<<endl;
}
//Function to find the length of the linked list
template<class ItemType>
int UList<ItemType>::Length()
{
    int len=0;
    NodeType<ItemType>* head=listPtr;
    while(head->next!=NULL)
    {
        len++;
        head=head->next;
    }
    return len;
}
//A simple program
int main()
{
        UList<float> x;
        fstream infile("float.dat",ios::in);
        while(infile)
        {
            float temp;
            infile>>temp;
            x.Insert(temp);
        }
        x.Print();
        int len=x.Length();
        cout<<"The number of elements in the float.dat is "<<len<<endl;
        x.Delete(2.0);
        x.Delete(9.0);
        x.Delete(6.2);
        x.Print();
        UList<float> y(x);
        cout<<"Contents of the list y are ";
        y.Print();
        if(x.IsThere(9.0))
        {
            cout<<"9.0 is there in x"<<endl;
        }
        else
        {
            cout<<"9.0 is not there in x"<<endl;
        }
        if(y.IsThere(9.0))
        {
            cout<<"9.0 is there in y"<<endl;
        }
        else
        {
            cout<<"9.0 is not there in y"<<endl;
        }
}

