#include <stdio.h>

//sum of N natural numbers using recursive
/*int fun(int t)
{
    if(t < 0)
        return 0;
    else
        return fun(t-1)+t;
}


void main()
{
    int n = 5;
    printf("%d\n",fun(n));
}

*/

//sum of N natural numbers using iterative
void main()
{
    int n, sum = 0, i;
    printf("Enter a number: \n");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    sum += i;

    printf("sum of %d natural numbers are: %d\n",n,sum);

}