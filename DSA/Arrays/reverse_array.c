#include<stdio.h>
#include<stdlib.h>

struct array
{
    int a[10];
    int size;
    int length;
};

void display(struct array a)
{
    int i;
    printf("\nDispalying array elements: \n");
    for(i=0; i<a.length; i++)
    printf("%d\t",a.a[i]);

}

int BinearSearch(struct array name, int key)
{
    int i, l = 0, h = name.length-1, mid;
    while(l <= h)
    {
        mid = (l+h)/2;
        if(key == name.a[mid])
        return mid;
        else if(key < name.a[mid])
        h = mid - 1;
        else
        l = mid + 1;
    }
    
    return -1;
}

// recusive approach
int RBinSearch(int a[], int l, int h, int key)
{
    int mid;
    if(l <= h)
    {
        mid = (l+h)/2;
        if(key == a[mid])
        return mid;
        else if(key < a[mid])
        return RBinSearch(a,l,mid-1,key);
        else
        return RBinSearch(a, mid+1, h, key);
    }

    return -1;
}

void Reverse_Array(struct array *name)
{
    int *b;
    int i, j;

    b = (int *)malloc(name->length*sizeof(int));

    for(i=name->length-1,j=0; i>=0; i--,j++)
    {
        b[j] = name->a[i];
    }

    for(i=0;i<name->length;i++)
    {
        name->a[i] = b[i];
    }
    
}

void Reverse2(struct array *arr_name)
{
    int i, j;
    
    for(i=0,j=arr_name->length-1; i<j; i++,j--)
    {
         swap(&arr_name->a[i], &arr_name->a[j]);
    }
}

void LeftShift(struct array *arr_name, int length)
{
    int i;
    int *b = (int *)malloc(arr_name->length*sizeof(int));
    for(i=0; i<arr_name->length; i++)
    {
        b[i] = arr_name->a[i];
    }
    
    for(i=arr_name->length-1;i>0;i--)
    {
        arr_name->a[i-1] = b[i];
    }

    arr_name->a[length-1] = 0;
}

void LeftRotate(struct array *arr_name, int length)
{
    int i;
    int *b = (int *)malloc(arr_name->length*sizeof(int));
    for(i=0; i<arr_name->length; i++)
    {
        b[i] = arr_name->a[i];
    }
    
    for(i=arr_name->length-1;i>0;i--)
    {
        arr_name->a[i-1] = b[i];
    }

    arr_name->a[length-1] = b[0];
}

void swap(int *ptr1, int *ptr2)
{
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main()
{
    struct array arr = {{2, 3, 4, 5, 6, 7}, 10, 6};
    
    display(arr);
    
   
   Reverse2(&arr);

    display(arr);
   
    
    

    return 0;

}