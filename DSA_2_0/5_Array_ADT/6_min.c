#include <stdio.h>

int min(int a[], int n)
{
    int i, min;
    min = a[0];
    for(i=0;i<n;i++)
    {
        if(a[i] < min)
        min = a[i];
    }

    return min;
}

void main()
{
    int arr[10] = {10, 1, 4, 8, 5, 6, 9, 3, 2, -5};
    
    printf("%d\n",min(arr,10));
}