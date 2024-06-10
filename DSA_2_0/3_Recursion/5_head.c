#include <stdio.h>

void fun(int n)
{
    if(n > 0)
    {
        fun(n-1);
        printf("%d ",n);
    }
}

void main()
{
    int a = 10;
    fun(a);
}