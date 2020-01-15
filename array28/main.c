//28. Write a program to find the row with the maximum sum in an array.Given Matrix The row with the maximum sum
//  1 2 3 7 8 9
//  4 5 6
//  7 8 9


#include <stdio.h>




int maxs(int array1[], int n)
{


  int incl = array1[0];
  int exc = 0;
  int excl;
  int x;
  for (x=1; x<n; x++)


  {
     excl = (incl>exc) ? incl: exc;

     incl = exc + array1[x];
     exc = excl;
  }
   return ((incl > exc)? incl : exc);

}

int main()




{


   int array1[] = {1,3,5,9,7,10,1,10,100};
     int n = sizeof(array1) / sizeof(array1[0]);
     int x;



     printf("\n\n\t\tThe given array is :  ");
    for(x=0; x<n; x++)

    {

    printf("%d ", array1[x]);

    }

    printf("\n");

  printf("\n\n\t\tThe maximum sum from the array such that no two elements are adjacent is: %d \n", maxs(array1, n));
  return 0;
}
