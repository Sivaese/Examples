#include <stdio.h>

void main()
{
    int n, i, j;
    printf("Enter a number: \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=10;j++)
        {
            printf("%d\t",j*i);
        }

        printf("\n");
    }
}