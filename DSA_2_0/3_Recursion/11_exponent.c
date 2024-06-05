#include <stdio.h>

/*
//m power n in iterative model
int power(int m, int n)
{
    int i, p;
    for(i=1;i<=n;i++)
    {
        if(i==1)
        p = m*i;
        else
        p = p*m;
    }

    return p;

}

void main()
{
    int m, n, p;
    printf("Enter numbers: \n");
    scanf("%d %d",&m,&n);
    p = power(m,n);
    printf("%d power %d is = %d\n",m,n,p);

}

*/

/*
// m power n in recursive method - 1
int power(int m, int n)
{
    if(n == 0)
    return 1;
    else
    return power(m, n-1)*m;
}

void main()
{
    int m, n;
    scanf("%d %d",&m,&n);
    printf("%d power %d is %d\n",m,n,power(m,n));
}
*/

//m power n in recursive method - 2
int power(int m, int n)
{
    if(n == 0)
    return 1;
    
    if(n % 2 == 0)
    return power((m*m), (n/2));
    else
    return m*power((m*m), ((n - 1) / 2));
}

void main()
{
    int m, n;
    scanf("%d %d",&m,&n);
    printf("%d power %d is %d\n",m,n,power(m,n));
}