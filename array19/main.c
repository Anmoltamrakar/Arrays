//19. Find the determinant of a 3 by 3 matrix.
//  Given Matrix Determinant
//  1 0 -1 1
//  0 0 1
//   -1 -1 0


#include <stdio.h>

int main()
   {
  int array1[10][10],x,y,z;
  int det=0;
  printf("\n\n\t\tInput elements in the first matrix :\n\t");
       for(x=0;x<3;x++)
        {
            for(y=0;y<3;y++)
            {
               printf("\n\n\t\telement is %d\n : ",x,y);
               scanf("%d",&array1[x][y]);
            }
        }
     printf("The matrix is :\n\t");
     for(x=0;x<3;x++)
     {
       for(y=0;y<3 ;y++)
         printf("%d\t",array1[x][y]);
        printf("\n\t");
     }

  for(x=0;x<3;x++)
      det = det + (array1[0][x]*(array1[1][(x+1)%3]*array1[2][(x+2)%3] - array1[1][(x+2)%3]*array1[2][(x+1)%3]));

  printf("\nThe Determinant of the matrix is: %d\n\t",det);

}

