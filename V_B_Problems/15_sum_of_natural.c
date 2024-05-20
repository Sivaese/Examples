#include<stdio.h>

void main()
{
    int n;
    printf("Enter a number: \n");
    scanf("%d",&n);
    if(n >= 1)
    {
        printf("%d\n",(n*(n+1))/2);
    }

}