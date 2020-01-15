//6. Write a program to print all unique elements in an array.
//  Input: 1,1,2,2,3,4,4 Output: 1,2,3,4

#include<stdio.h>

int main()
{

    int array[7]={1,1,2,2,3,4,4};
    int x,y;
    for(x=0;x<7;x++)
    {
        for(y=0;y<x;y++)
        {
            if(array[x]==array[y])
            break;
        }

        if(x==y)
        {
            printf("\n\n\t\t%d\n",array[x]);

        }

    }

    printf("\n\n\t\t%d\n");

    return 0;


}
