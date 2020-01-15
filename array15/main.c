//15. Write a program to find the transpose of a given matrix.


#include <stdio.h>
#define R1 3
#define C1 3

int main()
{
    int A[R1][C1];
    int B[C1][R1];
    int row, col;
    printf("Enter elements in matrix of size%d: \n",R1,C1);
    for(row=0;row<R1;row++)
    {
        for(col=0;col<C1;col++)
        {
            scanf("%d",&A[row][col]);
        }
    }

    for(row=0;row<R1;row++)
    {
        for(col=0;col<C1;col++)
        {

            B[col][row]=A[row][col];
        }
    }

    printf("\nOriginal matrix\n");
    for(row=0;row<R1;row++)
    {
        for(col=0;col<C1;col++)
        {
            printf("%d",A[row][col]);
        }

        printf("\n");
    }

    printf("Transpose of matrix A: \n");
    for(row=0; row<C1; row++)
    {
        for(col=0;col<R1;col++)
        {
            printf("%d",B[row][col]);
        }

        printf("\n");
    }

    return 0;
}

