
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node *compute(Node *head);
int main()
{
    int T;
	cin>>T;
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;
		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Node *result = compute(head);
        print(result);
        cout<<endl;
    }
}


/*This is a function problem.You only need to complete the function given below*/
/*
The structure of linked list is the following
struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
Node* reverse(Node *head)
{ Node* prev=NULL;
    Node* curr=head;
    Node* nex=NULL;
    if(head->next==NULL || head==NULL)
    {
        return head;
    }
    while(curr->next!=NULL)
    {
        nex=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nex;
    }
    curr->next=prev;
    return curr;
}
Node *compute(Node *head)
{
   Node* reversed=reverse(head);
   Node* temp=reversed;
   int maximum=temp->data;
   Node* prev=reversed;
   temp=temp->next;
   while(temp)
   {
       if(temp->data<maximum)
       {
           prev->next=temp->next;
           temp=temp->next;
       }
       if(temp!=NULL && temp->data>maximum)
       {
           maximum=temp->data;
           prev=temp;
           temp=temp->next;
       }
   }
   head=reverse(reversed);
   return head;
}
