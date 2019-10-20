#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    srand(time(0));
    //rand function produces integer values
    //So if i appply modulos on the value as 181 then I can get values from 0 to 180 inclusive of both of the values
    printf("%d \n",rand()%181);
    //1112-1010+1=103 ....So since we want the value to start from 1010 we add 1010 to the rand function which can generate numbers from 0 to 102
    //Which when added will be maximum till 1112
    printf("%d \n",1010+rand()%103);
    //rand will give values between 0 and 6 inclusive.So adding -3 to it will give us values between -3 to +3
    printf("%d \n",-3+rand()%7);
    //rand fucntion will give us values from 0,1,2,3,4
    //On adding 1 to it we get values from 1,2,3,4,5
    //On multiplying this value with 2 we get 2,4,6,8,10
    //On adding 1 to it we get 3,5,7,9,11
    printf("%d \n",2*(1+rand()%5)+1);
    //rand fucntion gives values between 0,1,2,3
    //On multiplying 4 we get 0,4,8,12
    //On adding 10 we get 10,14,18,22
    printf("%d \n",10+4*(rand()%4));
}

