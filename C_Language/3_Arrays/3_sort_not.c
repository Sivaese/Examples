#include <stdio.h>

int sorted(int a[], int n)
{
    int i;
    for(i=1;i<n;i++)
    {
        if(a[i] < a[i-1])
        return 0;
    }

    return 1;
}

int main()
{
    int n, i;
    printf("Enter the size of the array is: \n");
    scanf("%d",&n);
    int a[n];

    printf("writing array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Reading array elements: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    if(sorted(a, n))
    {
        printf("\nSorted array.\n");
    }
    else
        printf("\nNot sorted array.\n");

    
    return 0;

}