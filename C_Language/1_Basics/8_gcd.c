#include<stdio.h>

void main()
{
    int a = 6, b = 9, x, i, ans = 0;
    if(a <= b)
    x = a;
    else
    x = b;

    for(i=1;i<=x;i++)
    {
        if(a % i == 0 && b % i == 0)
        ans = i;
    }

    printf("%d\n",ans);
}