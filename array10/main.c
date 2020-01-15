//10. Write a program to print the odd and even elements in an integer array seperately:
//  Input: 2,-1,3,23,8,6
//  Output: Even: 2,8,6 Odd: -1, 3, 23


#include<stdio.h>
int main()
{
    int x,y,z;
    int num[6]={2,-1,3,23,8,6};
    int odd[6];
    int even[6];
    y=0;
    z=0;

    for(x=0;x<6;x++)
    {

        if(num[x]%2==0)
        {
            even[y]=num[x];
            y++;

        }

        else
        {
            odd[z]=num[x];
            z++;
        }
    }

    printf("\n\n\t\tEven number\t");
    for(x=0;x<y;x++)
    {
        printf("\n\n\t\t%d\t",even[x]);
    }


    printf("\n\n\t\tOdd number\t");
    for(x=0;x<z;x++)
    {
        printf("\n\n\t\t%d\t",odd[x]);
    }



    return 0;

}
