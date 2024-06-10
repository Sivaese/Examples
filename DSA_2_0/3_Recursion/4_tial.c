#include <stdio.h>


void fun(int n)
{
    if(n > 0)
    {
        printf("%d ",n);
        fun(n-1);
    }
}


void main()
{
    int a = 10;
    fun(a);
}