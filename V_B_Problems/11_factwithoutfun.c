#include<stdio.h>

// factorial

void main()
{
    int n, fact = 1, i;
    printf("Enter a number: \n");
    scanf("%d",&n);
    if(n >= 1)
    {
        for(i=1; i<=n; i++)
        {
            fact *= i;
        }

        printf("%d\n",fact);
    }
}