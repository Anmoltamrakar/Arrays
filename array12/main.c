//12. Write a program to print a 2D array of size 3 X 3.
//  Input: 1 2 3 4 5 6 7 8 9
//  Output: 1 2 3
//          4 5 6
//          7 8 9

#include <stdio.h>

int main()
{
  int arr1[3][3],i,j;

       printf("Input elements in the matrix :\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
          printf("element - [%d],[%d] : ",i,j);
          scanf("%d",&arr1[i][j]);
      }
  }

 printf("\nThe matrix is : \n");
  for(i=0;i<3;i++)
  {
        printf("\n");
      for(j=0;j<3;j++)
           printf("%d\t",arr1[i][j]);
  }

}
