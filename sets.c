#include<stdio.h>
#include<string.h>
void main()
{
    //arr[i][0] stores the key and arr[i][1] stores the value
    int arr[100][2];
    int total_commands=0,temp=0,i=0,count_of_unique_numbers=0,j=0,found=0;
    char query[20];
    printf("Enter the total number of commands: ");
    scanf("%d",&total_commands);
    for(i=0;i<total_commands;++i)
    {
        scanf("%s%d",query,&temp);
        if(strcmp(query,"ask")==0)
        {
            found=0;
            for(j=0;j<count_of_unique_numbers;++j)
            {
                if(arr[j][0]==temp)
                {
                    printf("1 %d\n",arr[j][1]);
                    found=1;
                    break;
                }
            }
            if(found==0)
            {
                printf("0 0\n");
            }

        }
        else if(strcmp(query,"add")==0)
        {
             found=0;
             for(j=0;j<count_of_unique_numbers;++j)
                {
                    if(arr[j][0]==temp)
                    {
                        arr[j][1]++;
                        printf("%d\n",arr[j][1]);
                        found=1;
                        break;
                    }
                }
            //If the element was not found in the set then we must insert it
            if(found==0)
            {
                arr[count_of_unique_numbers][0]=temp;
                arr[count_of_unique_numbers][1]=1;
                count_of_unique_numbers++;
                printf("1\n");
            }
        }
        else if(strcmp(query,"del")==0)
        {
            found=0;
            for(j=0;j<count_of_unique_numbers;++j)
            {
                if(arr[j][0]==temp)
                {
                    printf("%d\n",arr[j][1]);
                    arr[j][1]=0;
                    found=1;
                    break;
                }
            }
            if(found==0)
            {
               printf("0\n");
            }
        }
        else
        {
            printf("Wrong input\n");
        }
    }
}
