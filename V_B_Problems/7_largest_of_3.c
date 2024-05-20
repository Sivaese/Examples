#include<stdio.h>
#include<stdlib.h>

void main()
{
    int num1, num2, num3;
    printf("Enter numbers: \n");
    scanf("%d %d %d",&num1,&num2,&num3);
    
    if(num1 = num2 = num3)
    {
        printf("Invalid\n");
        exit(0);
    }
    else
    {
        if(num1 > num2 && num1 > num3)
        printf("num1");
        else if(num2 > num3)
        printf("num2");
        else
        printf("num3");
    }
    

}