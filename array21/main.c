//21. Write a program to find all the numbers that occurs odd number of times
//  in an array. The array may contain numbers from
//  0 to 9.
//  Input: 8 3 8 5 4 3 4 3 5 Output: 3


#include <stdio.h>

int odd1(int*array1,int x)

{
    int a,Re= 0;
         for(a=0;a<x;a++)
         {
          Re=Re^array1[a];
          }
         return Re;
    }

    int main()
    {
        int i;
     int array1[]={8,3,8,5,4,3,4,3,5};
        int c=sizeof(array1)/sizeof(array1[0]);
        printf("\n\n\t\tThe given array is :  ");
        for(i=0;i<c;i++)
        {
        printf("%d  ",array1[i]);
        }
        printf("\n");

     printf("\n\n\t\tNumber of odd number occur(s) : %d times.\n", odd1(array1, c));

    return 0;
}
