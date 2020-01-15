//17. Write a program to find the sum of right diagonals and sum of rows of a matrix.


#include <stdio.h>

int main()

   {
     int x,y,array1[50][50],sum=0,n;
     printf("\n\n\t\tInput the size of the square matrix : ");
     scanf("%d", &n);
     printf("Input elements in the first matrix :\n");
     for(x=0;x<n;x++)
        {
            for(y=0;y<n;y++)
            {
     printf("elemet is%d:",x,y);
     scanf("%d",&array1[x][y]);
     if (x==y)sum=sum+array1[x][y];
            }
        }
    printf("\n\n\t\tThe matrix is :\n");
     for(x=0;x<n;x++)
     {
       for(y=0;y<n ;y++)
         printf("%d",array1[x][y]);
        printf("\t");
     }

       printf("\n\n\t\tAddition of the right Diagonal elements is :%d.\t\n",sum);

   return 0;
}

