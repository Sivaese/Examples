#include <stdio.h>


int max(int a[], int n)
{
    int i, max;
    max = a[0];
    for(i=0;i<n;i++)
    {
        if(a[i] > max)
        max = a[i];
    }
    
    return max;
}

void main()
{
    int a[10] = {16, 4, 5, 6, 27, 8, 9, 12, 11, 12};
    
    printf("%d\n",max(a,10));
}