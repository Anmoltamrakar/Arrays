//Write a program to copy the elements of one array into another array.



#include <stdio.h>

int main()
{

    int arrayx[10],arrayy[10],i,n;
    printf("\n enter no of elements :");
    scanf("%d",&n);


    printf("\n\t Enter the value");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arrayx[i]);

    }

    for(i=0;i<n;i++)
    {
        arrayy[i]=arrayx[i];
    }
    printf("the values of array is \n");

    for (i=0;i<n;i++)
    {
        printf("\n\t arryayy[%d]=%d",i,arrayy[i]);

    }



    return 0;

}
