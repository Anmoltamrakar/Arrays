//11. Write a program to find the second largest element in an array.
//  Input: 2,-1,3,23,8,6 Output: 8

#include <stdio.h>

int main() {
    int a[10], n;
    int largest1,largest2,x;

    printf("\n\n\t\tenter number of elements you want in array\t");
    scanf("%d",&n);
    printf("\n\n\t\tenter elements\n");
    for (x=0;x<n;x++)
    {
        scanf("%d",&a[x]);
    }
    largest1=a[0];
    for (x=0;x<n;x++)
    {
        if (a[x]>largest1)
        {
            largest1=a[x];
        }
    }
    largest2=a[0];
    for (x=1;x<n;x++)
    {
        if (a[x]>largest2&&a[x]<largest1)
            largest2=a[x
                    ];
    }
    printf("\n\n\t\tSecond largest number is %d\n\n",largest2);
}
