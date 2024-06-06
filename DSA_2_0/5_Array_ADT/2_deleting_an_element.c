#include <stdio.h>

void main()
{
    int a[10] = {1,2,3,4,5};
    int d, i, index = 2, n;
    printf("Num of elements: \n");
    scanf("%d",&n);

    d = a[index];
    printf("before deleted elements: \n");
    for(i=0;i<n;i++)
    {   
        printf("%d\t",a[i]);
    }

    for(i=index;i<n-1;i++)
    {
        a[i] = a[i+1];
    }

    n--;
    printf("\nafter deleted elements: \n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);

    printf("\nDeleted element %d at index %d\n",d,index);

}