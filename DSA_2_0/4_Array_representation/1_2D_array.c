#include <stdio.h>
#include <stdlib.h>


void main()
{
    //Normal method
    int A[3][4] = {{1,2,3,4}, {2,4,6,8}, {3,5,7,9}};
    int i,j;

    //Array of integer pointer
    int *B[3];
    B[0] = (int *)malloc(4*sizeof(int));
    B[1] = (int *)malloc(4*sizeof(int));
    B[2] = (int *)malloc(4*sizeof(int));

    

    //Double pointer
    int **C;
    C = (int **)malloc(3*sizeof(int *));
    C[0] = (int *)malloc(4*sizeof(int));
    C[1] = (int *)malloc(4*sizeof(int));
    C[2] = (int *)malloc(4*sizeof(int));

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }

}