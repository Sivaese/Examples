#include<stdio.h>


void main()
{
    int a = 8, b = 7, x, i;
    if(a >= b)
    x = a;
    else
    x = b;

    int end = a*b;
    int st = x;

    for(i=x; i<=end; i++)
    {
        if(i % a == 0 && i % b == 0)
        {
            st = i;
            break;
        }
    }

    printf("%d\n",st);
}