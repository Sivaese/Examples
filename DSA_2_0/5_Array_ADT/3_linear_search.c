#include <stdio.h>
#define SIZE 10

/*//method - 1 general method
void main()
{
    int a[SIZE] = {9,2,8,3,2,5,7,2,2};
    int n, i, key, index = 0;
    printf("Enter length of array: \n");
    scanf("%d",&n);
    printf("Enter key element to search in array: \n");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(key == a[i])
        index++;
    }

    //printf("%d is found at index : %d\n",key,index);
    //printf("%d is found at position : %d\n",key,index+1);
    printf("Frequency of %d occried in %d times.\n",key,index);
}
*/

//method - 2 swapping key with a[0]
void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;

}

void display(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}

void main()
{
    int a[SIZE] = {9,4,8,3,2,5,7,6,1};
    int n, i, key, index = 0;
    printf("Enter length of array: \n");
    scanf("%d",&n);
    printf("Enter key element to search in array: \n");
    scanf("%d",&key);

    display(a,n);
    printf("\n");

    for(i=0;i<n;i++)
    {
        if(key == a[i])
        {
            swap(&a[i],&a[0]);
        }
    }

    display(a,n);

}
