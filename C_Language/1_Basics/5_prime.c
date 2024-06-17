#include<stdio.h>

int main()
{
    int num, i;
    printf("Enter a number: \n");
    scanf("%d",&num);
    if(num == 0 || num == 1)
    {
        printf("Not a prime number.\n");
        return 0;
    }
    for(i=2;i<num;i++)
    {
        if(num % i == 0)
        {
            printf("Not a prime number.\n");
            return 0;
        }
    }
    printf("Prime number.\n");

    return 0;
}