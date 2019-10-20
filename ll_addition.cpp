#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
};

typedef Node node;

void push(Node** head_ref,int new_data)
{
    Node* new_node=new Node();
    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}
void print_list(Node* node)
{
    while(node!=NULL)
    {
        cout<<node->data<<" ";
        node=node->next;
    }
    cout<<"\n";
}
void swap_pointer(Node** a,Node** b)
{
    Node* temp=*a;
    *a=*b;
    *b=temp;
}
int getSize(Node* head)
{
    int i=0;
    while(head!=NULL)
    {
        i++;
        head=head->next;
    }
}
node* add_same_size(Node* head1,Node* head2,int* carry)
{
    if(head1==NULL)
    {
        return NULL;
    }
    Node* result=new Node();
    result->next=add_same_size(head1->next,head2->next,carry);
    result->data=head1->data+head2->data+*carry;
    *carry=result->data/10;
    result->data=result->data/10;

    return result;
}

void add_carry_to_remaining(Node* head1,Node* curr,int* carry,Node** result)
{
    if(head1!=curr)
    {
        int sum;
        add_carry_to_remaining(head1->next,curr,carry,result);
        sum=head1->data+*carry;
        sum=sum%10;
        *carry=*carry/10;
        push(result,sum);
    }

}
void addList(Node* head1, Node* head2, Node** result)
{
    Node *cur;

    // first list is empty
    if (head1 == NULL)
    {
        *result = head2;
        return;
    }

    // second list is empty
    else if (head2 == NULL)
    {
        *result = head1;
        return;
    }

    int size1 = getSize(head1);
    int size2 = getSize(head2) ;

    int carry = 0;

    // Add same size lists
    if (size1 == size2)
        *result = addSameSize(head1, head2, &carry);

    else
    {
        int diff = abs(size1 - size2);

        // First list should always be larger than second list.
        // If not, swap pointers
        if (size1 < size2)
            swapPointer(&head1, &head2);

        // move diff. number of nodes in first list
        for (cur = head1; diff--; cur = cur->next);

        // get addition of same size lists
        *result = addSameSize(cur, head2, &carry);

        // get addition of remaining first list and carry
        addCarryToRemaining(head1, cur, &carry, result);
    }

    // if some carry is still there, add a new node to the fron of
    // the result list. e.g. 999 and 87
    if (carry)
        push(result, carry);
}

// Driver code
int main()
{
    Node *head1 = NULL, *head2 = NULL, *result = NULL;

    int arr1[] = {9, 9, 9};
    int arr2[] = {1, 8};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    // Create first list as 9->9->9
    int i;
    for (i = size1-1; i >= 0; --i)
        push(&head1, arr1[i]);

    // Create second list as 1->8
    for (i = size2-1; i >= 0; --i)
        push(&head2, arr2[i]);

    addList(head1, head2, &result);

    printList(result);

    return 0;
}
