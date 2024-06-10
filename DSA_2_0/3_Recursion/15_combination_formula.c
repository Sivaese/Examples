// combination or selection formula
/*
            n!
ncr = ------------------
            r!(n-r)!
*/

#include <stdio.h>

/*//Iterative
int fact(int n)
{
    int fact = 1, i;
    for(i=1;i<=n;i++)
    fact *= i;

    return fact;
}

void main()
{
    int n, r, t1 = 0, t2 = 0, t3 = 0;
    scanf("%d %d",&n,&r);
    t1 = fact(n);
    t2 = fact(r);
    t3 = fact(n-r);

    printf("%d\n",t1/(t2*t3));
}

*/

//recusion
int rnCr(int n, int r)
{
    if(r == 0 || n == r)
    return 1;
    else
    return (rnCr(n-1, r-1) + rnCr(n-1, r));
}

void main()
{
    printf("%d\n",rnCr(5,3));
}