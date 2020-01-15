//18. Write a program to display the lower triangular matrix of a given matrix.
//  Given Matrix Lower Triangular Matrix
//  1 2 3 1 2 3
//  4 5 6 0 5 6
//  7 8 9 0 0 9

#include <stdio.h>

int main()
   {
  int arr1[10][10],i,j,n;
  float determinant=0;
 printf("Input the size of the square matrix : ");
     scanf("%d", &n);
     printf("Input elements in the first matrix :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
               printf("element is %d\t : ",i,j);
               scanf("%d",&arr1[i][j]);
            }
        }
     printf("The matrix is :\n");
     for(i=0;i<n;i++)
     {
       for(j=0;j<n ;j++)
         printf("%d\t",arr1[i][j]);
        printf("\n");
     }

   for(i=0;i<n;i++){
    printf("\n\n\t\t");

      for(j=0;j<n;j++)
           if(i<=j)
             printf("%d\t",arr1[i][j]);
           else
             printf("%d\t",0);
  }
       printf("\n");
       return 0;
}


