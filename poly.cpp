//The program works fine now...
//I have made a few changes
//I included a function make zeroes instead of assigning values directly inside the struct definition so that works better
//Then there was a small error in the code for multiplication.. Then I corrected it too..
#include <iostream>
using namespace std;
struct node
{
    int base;
    int power;
};
void make_zeros(node ptr[],int size1)
{
    for(int i=0;i<=size1;++i)
    {
        ptr[i].base=0;
        ptr[i].power=0;
    }
}
void insert(node ptr[],int basee,int powerr)
{
    ptr[powerr].power=powerr;
    ptr[powerr].base=basee;
}

void subtract(node ptr1[],int size1,node ptr2[],int size2,node ptr3[])
{
    for(int j=0;j<=size1;j++)
    {
        if(ptr1[j].base!=0)
        {
            ptr3[j].base=(ptr3[j].base)+(ptr1[j].base);
            ptr3[j].power=ptr2[j].power;
        }

    }
    for(int j=0;j<=size2;j++)
    {
        if(ptr2[j].base!=0)
        {
        ptr3[j].base=(ptr3[j].base)-(ptr2[j].base);
        ptr3[j].power=ptr2[j].power;
        }

    }
}
void addition(node ptr1[],int size1,node ptr2[],int size2,node ptr3[])
{
    for(int j=0;j<=size1;j++)
    {
        if(ptr1[j].base!=0)
        {
            ptr3[j].base=(ptr3[j].base)+(ptr1[j].base);
            ptr3[j].power=ptr2[j].power;
        }

    }
    for(int j=0;j<=size2;j++)
    {
        if(ptr2[j].base!=0)
        {
            ptr3[j].base=(ptr3[j].base)+(ptr2[j].base);
            ptr3[j].power=ptr2[j].power;
        }

    }
}


void display(node ptr[],int size)
{
    if(ptr[0].base!=0)
    {
        cout<<ptr[0].base<<"+";
    }
    for(int i=1; i<=size; i++)
    {
        if(ptr[i].base!=0)
        {
            cout<<ptr[i].base<<"x^"<<ptr[i].power<<"+";
        }
    }
}
void multiply(node ptr1[],int size1,node ptr2[],int size2,node ptr3[])
{
    for(int i=0;i<=size1;i++)
    {
        for(int j=0;j<=size2;j++)
        {
            ptr3[ptr1[i].power+ptr2[j].power].base=ptr3[ptr1[i].power+ptr2[j].power].base+(ptr1[i].base*ptr2[j].base);
            ptr3[ptr1[i].power+ptr2[j].power].power=ptr1[i].power+ptr2[j].power;
        }
    }
}
int main()
{
    bool choice1=true;
    bool choice2=true;
    int size1,size2,base1,base2,power1,power2;
    cout<<"Enter the max power in polynominal 1: ";
    cin>>size1;
    node *a= new node[size1+1];
    make_zeros(a,size1+1);
    while(choice1==true)
    {
        cout<<"Enter the base,the power of x: ";
        cin>>base1>>power1;
        insert(a,base1,power1);
        cout<<endl<<"1:Write another value in this equation, 0:end"<<endl;
        cin>>choice1;
    }
    display(a,size1);
    cout<<"\nEnter the max power in polynominal 2: ";
    cin>>size2;
    node *b= new node[(size2+1)];
    make_zeros(b,size2+1);
    while(choice2==true)
    {
        cout<<"Enter the base,the power of x: ";
        cin>>base2>>power2;
        insert(b,base2,power2);
        cout<<endl<<"1:Write another value in this equation, 0:end"<<endl;
        cin>>choice2;
    }
    display(b,size2);
    cout<<endl;

    /*node *add=new node[(size1+size2+1)];


    addition(a,size1,b,size2,add);
    display(add,(size1+size2+1)); */

    /* node *sub=new node[(size1+size2+1)];


    subtract(a,size1,b,size2,sub);
    display(sub,(size1+size2+1));
    */
    node *mul=new node[(size1+size2+1)];
    make_zeros(mul,size1+size2+1);
    multiply(a,size1,b,size2,mul);
    display(mul,(size1+size2+1));
}
