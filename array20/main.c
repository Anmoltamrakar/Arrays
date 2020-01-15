//20. Write a program to accept a matrix and determine whether it is a sparse matrix.
//  A matrix is considered sparse if there are
//  more zero-elements than there are non-zero elements.
//  Also, calculate the sparsity of the matrix.Given Matrix
//  Output
//  1 0 -1 The given matrix is sparse. Sparsity : 5 / 9
//  0 0 1
//  -1 0 0



#include <stdio.h>

int main()
{
    static int a[10][10],x,y,z,i,j=0;
         printf("\n\n\t\tInput the number of rows of the matrix : ");
         scanf("%d",&z);
         printf("\n\n\t\tInput the number of columns of the matrix : ");
         scanf("%d",&i);
         printf("\n\n\t\tInput elements in the first matrix :\n");
           for(x=0;x<z;x++)
            {
                for(y=0;y<i;y++)
                {
                    scanf("%d",&a[x][y]);
                if (a[x][y]==0)
                {
                    ++j;
                }
                }
            }
        if (j>((z*i)/2))
        {
            printf ("\n\n\t\tThe given matrix is sparse matrix. \n");
        }
        else
            printf ("\n\n\t\tThe given matrix is not a sparse matrix.\n");

        printf ("\n\n\t\tSparsity %d/9\n\n",j);
    return 0;
}

