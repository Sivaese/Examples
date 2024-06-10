#include <stdio.h>

void fun(int n)
{
    if(n>0)
    {
        fun(n-1);
        printf("%d ",n);
        fun(n-2);
    }
}

void main()
{
    int a = 3;
    fun(a);
}