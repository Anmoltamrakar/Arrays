//31. Write a program to find the sum of Upper Triangular elements of a matrix.
//  Matrix Sum of Upper Triangular matrix
//  1 2 3 34 ( 1 + 4 + 5 + 7 + 8 + 9)
//  4 5 6
//  7 8 9


#include <stdio.h>




int main()



{
    int A,B, x, y, z, sum=0;


        int array1[3][3]={{1, 2, 3},
                       {4, 5, 6},
                       {7, 8, 9}};
        A = B = x = 3;


        int i,j;
        printf("\n\n\t\tThe given array is :  \n");


        for(i = 0; i < A; i++)

        {
        for (j=0;j<B;j++)
        {
        printf("%d  ", array1[i][j]);

        }


        printf("\n");

        }
     printf("\n\n\t\tThe elements being summed of the upper triangular matrix are: ");
        for(y = 0; y < A; y++)
        {

            for(z = 0; z < B; z++)


            {
                if(y < z)
                {
                    printf("%d  ",array1[y][z]);
                    sum += array1[y][z];
                }
            }
        }
        printf("\nThe Sum of the upper triangular Matrix Elements are: %d", sum);
        return 0;
    }
