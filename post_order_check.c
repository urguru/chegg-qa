#include<stdio.h>
typedef struct bstCDT bst;
struct bstCDT
{
    int val;
    bst *left;
    bst *right;
};
bst *BuildTree(int *input, int size)
{
    int last=size-1,index=last-2;
    while(index>=0 && input[last]>input[index])
    {
        index--;
    }
    int temp=index;
    if(temp==0)
    {
        bstCDT
        return
    }


}
void main()
{
    int arr[100],i;
    int size;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    printf("Enter the elements of the array\n")
    for(i=0;i<size;++i)
    {
        scanf("%d",&arr[i]);
    }

}
