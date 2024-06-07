#include <stdio.h>

int sum(int a[], int n)
{
    int i, sum = 0;
    for(i=0;i<n;i++)
    {
        sum += a[i];
    }

    return sum;
}
void main()
{
    int a[10] = {1, -2, 6, 8, 9, 10, -10, 25, 120, -20};
    
    printf("%d\n",sum(a,10));
}