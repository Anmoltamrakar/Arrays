//9. Write a program to find the maximum and minimum element of an array.
//  Input: 2,-1,3,23,8,6 Output: 23, -1



#include<stdio.h>

int main()

{
    int array[100],max,min,n,x;
    printf("\n\n\t\tEnter the size of the array\t");
    scanf("%d",&n);
    printf("\n\n\t\tEnter the elements in the arrays\n");


    for(x=0;x<n;x++)
    {
        scanf("%d",&array[x]);

    }

    max=array[0];
            min=array[0];


    for(x=1;x<n;x++)
    {
        if(array[x]>max)
        {
            max=array[x];

        }

        if(array[x]<min)
        {
            min=array[x];

        }


    }


    printf("\n\n\t\tMaximum element = %d\n\t",max);
    printf("\n\n\t\tMinimum element = %d\n\t",min);





    return 0;


}
