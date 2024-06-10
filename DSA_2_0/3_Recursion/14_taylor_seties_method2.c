#include <stdio.h>

double taylor(int x, int n)
{
    static double s = 1;
    if(n == 0)
    return s;
    else
    {
        s = 1+s*x/n;
        return taylor(x, n-1);
    }
}

void main()
{
    printf("%lf ",taylor(2,10));
}