//25. Write a program to print the next greater elements in a given unsorted array.
//  print -1 for elements for which no greater
//  element exist.
//  Array: 5 3 10 9 6 13 Output: 10 10 13 13 13 -1


#include <stdio.h>

void eli (int *array1,int array)
{
    int BElem,x,y;
    for(x=0;x<array;x++)
    {

        for (y=x+1,BElem =-1;y<array;y++)
        {
            if (array1[x]<array1[y])
            {
                BElem = array1[y];
                break;
            }
        }
        printf("\n\n\t\tNext bigger element of %d in the array is:   %d\n", array1[x], BElem);
    }
}
void bele (int *array1,int arrays)
{
    int nBElem,i,j;
    for(i=0;i<arrays;i++)
    {
        for (j=i+1,nBElem =-1;j<arrays;j++)
        {
            if (array1[i]<array1[j])
            {
                nBElem = array1[j];
                break;
            }
        }
        printf("%d ", nBElem);
    }
}
int main()
{
    int z,array1[]= {5,3,10,9,6,13};
    int ctr=sizeof(array1)/sizeof(array1[0]);

    printf("\n\n\t\tThe given array is :  \n");
    for(z=0;z<ctr;z++)
    {
    printf("%d  ", array1[z]);
    }
    printf("\n");
    printf("\n\n\t\tNext Bigger Elements are:\n");
    eli(array1, ctr);

    printf("\n\n\t\tNext Bigger Elements Array:\n");
    bele(array1, ctr);
    return 0;
}
