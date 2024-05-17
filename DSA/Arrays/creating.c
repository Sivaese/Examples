#include<stdio.h>
#include<stdlib.h>

struct Array
{
    int *a;
    int size;
    int length;
};

void display(struct Array a)
{
    int i;
    printf("Elements are: \n");
    for(i=0; i<a.length; i++)
    {
        printf("%d\t",a.a[i]);
    }
}

int main()
{
    struct Array arr;
    int i, n;
    printf("Enter size of array\n");
    scanf("%d",&arr.size);
    arr.a = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;
    printf("Enter number\n");
    scanf("%d",&n);

    printf("Entering array elements: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr.a[i]);
    }

    arr.length = n;

    display(arr);

    return 0;
}