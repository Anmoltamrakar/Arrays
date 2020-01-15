//1. Write a program in C to store numbers 1,2,3,4,5,6,7,8,9
//   in an array and print it.

#include<stdio.h>


int main()

{
    printf("\n\tThe numbers are\n");
    int array[10]={0,1,2,3,4,5,6,7,8,9};
    int x;
    for(x=0;x<=9;x++)
    {

        printf("\n\t%d\n",array[x]);

    }
    return 0;

}
