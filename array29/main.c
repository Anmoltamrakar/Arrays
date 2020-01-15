//29. Write a program to replace every element with the greatest element on its right.
//  Array: 7 5 8 9 6 8 5 7 4 6 Output: 9 9 9 8 8 7 7 6 6 0



#include <stdio.h>




void printA(int x[],int t)

{

 for(int y=0;y<t;y++)
   printf("%d",x[y]);
}

void rwng(int d[],int size)
{
    int max= d[size-1];
    d[size-1]=0;

    for(int i=size-2;i>=0;i--)

    {


        int temp=d[i];

        d[i]=max;
        if(max<temp)

            max = temp;


    }
 printf("\n\n\t\tAfter replace the modified array is: ");
 printA(d,size);


}



int main()
{

    int x, array1[] = {7, 5, 8, 9, 6, 8, 5, 7, 4, 6};
    int n = sizeof(array1) / sizeof(array1[0]);
    printf("\n\n\t\tThe given array is :  ");
    for(x = 0; x < n; x++)
    {
    printf("%d", array1[x]);
    }
    printf("\n");
    rwng(array1, n);




    return 0;
}
