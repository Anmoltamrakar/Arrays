//22. Write a program to find a pair of numbers in an array that sum to 15.
//  Print "None" if there are no such pair.
//  Input: 6 8 4 -5 7 9 Output: 8 7


#include <stdio.h>

void sum(int array1[],int x,int y)
{
    for (int i=0;i<x-1;i++)
    {
        for (int j=i+1;j<x;j++)
        {
            if (array1[i] + array1[j]==y)
            {
                printf("\n\n\t\tPair of elements can make the given sum by the value of index %d and %d\n\n", i, j);
                return;
            }
        }
    }
    printf("\n\n\t\tNo Pair can make the given sum.");
}

int main()
{
    int array1[] = {6,8,4,-5,7,9};
    int s = 15;
    printf("\n\n\t\tThe given array : ");
    int n = sizeof(array1)/sizeof(array1[0]);
     for (int i = 0; i <= n - 1; i++)
    {
    printf("%d  ",array1[i]);
    }
    printf("\n\n\n\t\tThe given sum : %d\n\n\n",s);
    printf("\n");
    sum(array1,n,s);
    return 0;
}




