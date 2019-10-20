#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp1=fopen("i.txt","r");
    FILE *fp2=fopen("y2.txt","r");
    FILE *fp3=fopen("i.txt","r");
    int mat1[1000],mat2[1000],i=0,count_lines,total_number=0;
    char chr;
    while(!feof(fp1))
    {
    fscanf(fp1,"%d",&mat1[i]);
    printf("%d ",mat1[i]);
    i++;
    total_number=total_number+1;
    }
    i=0;
    while(!feof(fp2))
    {
    fscanf(fp2,"%d",&mat2[i]);
    printf("%d ",mat2[i]);
    i++;
    }
    chr = getc(fp3);
    while (chr != EOF)
    {
        //Count whenever new line is encountered
        if (chr == 'n')
        {
            count_lines = count_lines + 1;
        }
        //take next character from file.
        chr = getc(fp3);
    }
    count_lines=count_lines+1;
    printf("%d the lines",count_lines);
    printf("%d the total numbers",total_number);
}
