// insertion in a sorted array

#include<stdio.h>
#include<stdlib.h>

struct array
{
    int *A;
    int length;
    int size;
};

void display(struct array arr)
{
    int i;
    for(i=0; i<arr.length; i++)
    {
        printf("%d\t",arr.A[i]);
    }
}


void main()
{
    struct array arr1;
    printf("Enter size of the array is: \n");
    scanf("%d",&arr1.size);

    arr1.A = (int *)malloc(arr1.size*sizeof(int));

    printf("Enter length of the array is: \n");
    scanf("%d",&arr1.length);

    printf("Enter the elements of the array: \n");
    for(int i = 0; i<arr1.length; i++)
    {
        scanf("%d",&arr1.A[i]);
    }

    display(arr1);

}