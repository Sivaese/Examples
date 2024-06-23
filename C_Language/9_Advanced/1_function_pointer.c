#include <stdio.h>

int add(int a, int b)
{
    return (a+b);
}

void main()
{
    int x = 10, y = 20;
    int (*ptr)(int, int) = &add;
    printf("%d\n",ptr(x,y));
}