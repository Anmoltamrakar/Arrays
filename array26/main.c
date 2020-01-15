//26. Write a program to find the smallest positive number missing in an array.
//  Array: 3 1 4 10 -5 15 2 -10 -20 Output: 5

#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y)
{
    int tem;
    tem = *x;
    *x   = *y;

    *y   = tem;
}



int snpn (int array1[],int arrays)
{
    int x=0,y;
    for(y=0;y<arrays;y++)
    {
       if (array1[y]<=0)
       {

           swap(&array1[y],&array1[x]);
           x++;
       }

    }
    return x;
}
int gmpn (int array1[],int arrays)
{
  int i;
  for(i=0;i<arrays;i++)
  {

    if(abs(array1[i])-1<arrays  &&  array1[abs(array1[i])-1]>0)
      array1[abs(array1[i])-1] = -array1[abs(array1[i])-1];


  }

  for(i=0;i<arrays;i++)
    if (array1[i] > 0)
      return i+1;
  return arrays+1;
}



int gspmn (int array1[],int arrays)
{

   int shift=snpn (array1,arrays);
   return gmpn(array1+shift,arrays-shift);


}



int main()
{
  int arry1[] = {3,1,4,10,-5,15,2,-10,-20};
  int arry_s = sizeof(arry1)/sizeof(arry1[0]);
  int i;

    printf("\n\n\t\tThe given array is :  ");
    for( i=0;i<arry_s;i++)
    {

    printf("%d\n",arry1[i]);

    }

  int missn = gspmn(arry1,arry_s);
  printf("The smallest positive number missed is:  %d ", missn);
  getchar();
  return 0;
}
