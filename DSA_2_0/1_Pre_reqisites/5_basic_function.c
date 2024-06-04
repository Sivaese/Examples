#include <stdio.h>

int add(int a, int b)
{
    return (a+b);
}
void main()
{
    int x = 10, y = 5;
    int z = add(x,y);
    printf("%d\n",z);
}