#include<iostream>
using namespace std;
int main()
{
int i=0;
char s[]="hello";
for(i=0;s[i];++i);
cout<<i;
i=0;
while(s[i++]);
cout<<i;
return 0;
}
