#include<stdio.h>

int main()
{
    FILE *pfile;
    pfile=fopen("myfile.txt","w");
    fprintf(pfile,"Robot #1:\n");
    fprintf(pfile,"Going forward [%-20]");
    fprintf(pfile,"Hello");
    fclose(pfile);
    return 0;
}
