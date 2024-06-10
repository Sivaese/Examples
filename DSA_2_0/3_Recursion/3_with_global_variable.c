#include <stdio.h>

static int x = 0;

int fun(int a)
{
    if(a > 0)
    {
        x++;
        return fun(a-1)+x;
    }

    return 0;
}


void main()
{
    int a = 5;
    printf("%d\n",fun(a));
}