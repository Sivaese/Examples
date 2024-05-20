#include<stdio.h>

void main()
{
    int num;
    printf("Enter a number: \n");
    scanf("%d",&num);
    if(num >= 1)
    {
        if((num & 1) == 0)
        printf("Even\n");
        else 
        printf("Odd\n");
    }
    
}