//8. Write a program to find the maximum element of an array.
//  Input: 2,-1,3,23,8,6 Output: 23

#include<stdio.h>

int main()

{
    int array[50],max,n,x=1;
    printf("Enter the number of elements in array\n");
        scanf("%d",&n);
        printf("Enter %d integers\n",n);
        for(x=0;x<n;x++)
        scanf("%d",&array[x]);
        max=array[0];
        for(x=0;x<n;x++)
        {
            if(array[x]>max)
            {
                max=array[x];

            }
        }
        printf("maximum element is at %d and its value is %d\t.\n",max);









return 0;

}
