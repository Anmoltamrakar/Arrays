//7. Write a program to count the frequency of each element in an array.
//  Input: 1,1,2,2,3,4,4, Output: 1-2, 2-2, 3-1, 4 -2

#include <stdio.h>

int main()
{
    int array[100],freq[100];
    int i,n,j,count;

    printf("Enter the number of elements of array");
    scanf("%d",&n);

    printf("Enter the %d elements of array",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);

        freq[i]=-1;          }

    for(i=0;i<n;i++)
    {
      count =1;
      for(j=i+1;j<n;j++)
      {
          if(array[i]==array[j])
          {
              count++;

              freq[j]=0; 
          }
    }
      if(freq[i]!=0)
      {
          freq[i]=count;
      }


    printf("Frequency of all elements of arrays \n");
    for(i=0;i<n;i++)
    {
        if(freq[i]!=0)
        {
            printf("%d occurs %d times \n",array[i],freq[i]);

        }
    }

    return 0;
}
}
