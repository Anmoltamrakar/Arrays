//27. Write a program to print a matrix in spiral form.
//  Given Matrix Spiral Form
//  1 2 3 1 2 3 6 9 8 7 4 5
//  4 5 6
//  7 8 9





#include <stdio.h>


#define k 4

#define l 5



void som(int en,int enl,int array1[k][l])

{

    int x,rind=0,col=0;
    while (rind<en && col<enl)


    {

        for (x=col;x<enl;++x)

        {


           printf("%d",array1[rind][x]);

        }
        rind++;
        for (x=rind;x<en;++x)

        {

            printf("%d",array1[x][enl-1]);

        }
        enl--;
        if (rind< en)
        {
            for(x=enl-1;x>=col;--x)

            {

                printf("%d",array1[en-1][x]);
            }

            en--;
        }


        if (col<enl)

        {

            for (x=en-1;x>=rind;--x)

            {

                printf("%d",array1[x][col]);

            }

            col++;


        }
    }
}


int main()


{


int x,y;


    int array1[k][l] = { {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20}


    };

    printf("\n\n\t\tThe given array in matrix form is :  \n");
    for(x=0;x<k;x++)

    {

    for (y=0;y<l;y++)
    {

    printf("%d",array1[x][y]);

    }

    printf("\n");

    }
printf("\n\n\t\tThe spiral form of above matrix is: \n");


som(k,l,array1);




    return 0;





}




