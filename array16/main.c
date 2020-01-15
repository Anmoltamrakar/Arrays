//16. Write a program to find the sum of left diagonals of a matrix.


#include <stdio.h>

int main()

  {
    int i,j,arr1[50][50],sum=0,n,k=0;

    printf("Input the size of the square matrix : ");
    scanf("%d", &n);
         k=n;
    printf("Input elements in the first matrix :\n\t");
      for(i=0;i<n;i++)
       {
           for(j=0;j<n;j++)
           {
              printf("element%d\t is : ",i,j);
              scanf("%d",&arr1[i][j]);
           }
       }
    printf("The matrix is :\n\t");
    for(i=0;i<n;i++)
    {
      for(j=0;j<n ;j++)
        printf("%d\t",arr1[i][j]);
       printf("\t");
    }

    for(i=0;i<n;i++)
    {
          k=k-1;
      for(j=0;j<n ;j++)
           {
             if (j==k)

               {
                 sum= sum+arr1[i][j];
               }

           }
    }
      printf("Addition of the  left Diagonal elements is :%d\t",sum);
   }
