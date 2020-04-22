
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
struct Node* addTwoLists(struct Node* first, struct Node* second);
void push(struct Node** head_ref, int new_data) {
    struct Node* new_Node = new Node(new_data);
    new_Node->next = (*head_ref);
    (*head_ref) = new_Node;
}
void printList(struct Node* Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("
");
}
void freeList(struct Node* Node) {
    struct Node* temp;
    while (Node != NULL) {
        temp = Node;
        Node = Node->next;
        free(temp);
    }
}
int main(void) {
    int t, n, m, i, x;
    cin >> t;
    while (t--) {
        struct Node* res = NULL;
        struct Node* first = NULL;
        struct Node* second = NULL;
        cin >> n;
        for (i = 0; i < n; i++) {
            cin >> x;
            push(&first, x);
        }
        cin >> m;
        for (i = 0; i < m; i++) {
            cin >> x;
            push(&second, x);
        }
        res = addTwoLists(first, second);
        printList(res);
        if (first) freeList(first);
        if (second) freeList(second);
    }
    return 0;
}

/*This is a function problem.You only need to complete the function given below*/

/*
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
// write a function returns the resultant linked list
Node* addTwoLists(Node* first, Node* second) {
    int carry=0;
    Node *head,*now;
    while(first!=NULL || second!=NULL)
    {
        Node *result;
        result=new Node(0);
        int sum=first->data+second->data+carry;
        carry=sum/10;
        result->data=sum%10;
        if(head==NULL)
        {
            head=result;
            result->next=NULL;
            now=result;
        }
        else
        {
            now->next=result;
            now=result;
        }
        first=first->next;
        second=second->next;
    }
    if(first==NULL)
    {
        while(second!=NULL)
        {
            Node* result;
            result=new Node(0);
            int sum=second->data+carry;
            carry=sum/10;
            result->data=sum%10;
            result->next=NULL;
            now->next=result;
            now=result;
            second=second->next;
        }

    }
    if(second==NULL)
    {
        while(first!=NULL)
        {
            Node* result;
            result=new Node(0);
            int sum=first->data+carry;
            carry=sum/10;
            result->data=sum%10;
            result->next=NULL;
            now->next=result;
            now=result;
            first=first->next;
        }
    }
    if(carry!=0)
    {
        Node* result=new Node(0);
        result->data=carry;
        result->next=NULL;
        now->next=result;
    }
    return head;
}
