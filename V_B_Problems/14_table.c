#include<stdio.h>

void main()
{
    int n, i;
    printf("Enter a number: \n");
    scanf("%d",&n);
    if(n >= 1)
    {
        for(i=1;i<=10;i++)
        {
            printf("%d x %d = %d\n",n,i,n*i);
        }
    }
}