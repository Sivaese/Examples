#include<stdio.h>

void main()
{
    int a = 10, b = 20;
    printf("Before swap numbers are a = %d and b = %d\n",a,b);

   /* a = a * b; // 200
    b = a / b; // 200 / 20
    a = a / b; // 200 / 10 */

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap numbers are a = %d and b = %d\n",a,b);
}