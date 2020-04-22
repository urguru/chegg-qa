#include<ctime>
#include <stdio.h>      /* fgets */
#include <stdlib.h>     /* atoi */
using namespace std;
char *getDateAndTime()
{
    time_t now = time(0);

    // convert now to string form
    char* dt = ctime(&now);
    return dt;
}
int getinteger()
{
    char num[7];
    printf("Enter an integer(1-1000000) or type x to exit: ");
    fgets(num,7,stdin);
    if(num=="x")
        return -1;
    return atoi(num);
}
int main()
{
    char name[20];
    printf("Enter your name\n");
    fgets(name,20,stdin);
    printf(getDateAndTime());
    printf(getinteger());
}
