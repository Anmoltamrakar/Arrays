//23. You are given an array that may include numbers from 0 to 9.
//  Print all the numbers between 0 to 9 that are missing in an
//  array:
//  Array: 1 3 4 2 5 6 9 8 Output: Missing: 7


#include <stdio.h>

int num(int*array1,int asize)
{
    int x,sum=0,n=asize+1;
    for(x=0;x<asize;x++)
    {
        sum=sum+array1[x];
    }

    return (n*(n+1))/2-sum;
}

int main()
{
    int i;
    int array1[] = {1,2,3,4,5,6,8,9};
    int c = sizeof(array1)/sizeof(array1[0]);
    printf("\n\n\t\tThe given array is :  ");



    for(i=0;i<c;i++)
    {

        printf("%d  ", array1[i]);
    }
    printf("\n");

 printf("\n\n\t\tThe missing number is : %d \n",num(array1,c));
 return 0;

}


