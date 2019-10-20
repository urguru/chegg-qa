#include<stdio.h>
void main()
{
int base_height,base_width,head_width;
int i,j;
printf("Enter arrow base height :\n");
scanf("%d",&base_height);
printf("Enter arrow base width :\n");
scanf("%d",&base_width);
printf("Enter arrow head width :\n");
scanf("%d",&head_width);
//I checked and the condition mentioned in the question was wrong
//If we want an arrow the condition should be the other way round
while(head_width>=base_width)
{
for(i=0;i<base_height;++i)
{
for(j=0;j<base_width;++j)
printf("*");
printf("\n");
}
for(i=head_width;i>0;--i)
{
for(j=0;j<i;++j)
printf("*");
printf("\n");
}
printf("Enter arrow base height :\n");
scanf("%d",&base_height);
printf("Enter arrow base width :\n");
scanf("%d",&base_width);
printf("Enter arrow head height :\n");
scanf("%d",&head_width);
}
}
