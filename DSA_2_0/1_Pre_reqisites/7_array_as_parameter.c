// array as parameter -- passing its address only
#include <stdio.h>
#include <stdlib.h>

/*// passing array as an parameter
void fun(int a[], int n)
{
    int i;
    a[0] = 10;
    a[1] = 20;
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}

void main()
{
    int a[5] = {1,2,3,4,5};
    fun(a,5);
}

*/

//function returning an array

int* fun(int size)
{
    int *q;
    q = (int *)malloc(size * sizeof(int));

    for(int i=0;i<size; i++)
    scanf("%d",&q[i]);

    return q;

}

void main()
{
    int *ptr, n = 3;
    ptr = fun(n);

    for(int i=0;i<n;i++)
    printf("%d\t",ptr[i]);

}