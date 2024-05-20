#include<stdio.h>
// year is exactly divisible by 4 and 400

void main()
{
    int year;
    printf("Enter a year: \n");
    scanf("%d",&year);

    if(year % 4 == 0 || year % 400 == 0)
    printf("Leap year\n");
    else
    printf("Not a leap year\n");

}