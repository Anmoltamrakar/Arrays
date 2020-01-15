//5. Write a program to count a total number of duplicate elements in an array.
//      Input: 1,1,2,2,3,4,4 Output: 3


#include <stdio.h>

int main()
{
    int x,y;
    int count=0;
    int array[7]={1,1,2,2,3,3,4,4};
    for(x=0;x<=6;x++)
    {
        for(y=x+1;y<=6;y++)
        {
            if(array[x]==array[y])
            {
                count+=1;
            }
        }

    }
    printf("\n\n\t\t%d\n\n\t\t"
           "",count);

    return 0;
}
