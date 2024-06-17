#include <stdio.h>


void main()
{
    int num, i, j;
    printf("Enter number columns: \n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }

        printf("\n");
    }
}