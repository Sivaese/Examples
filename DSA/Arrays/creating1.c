// Without memory allocating, dirctly initializing the elements.

#include<stdio.h>

struct array
{
    int a[10];
    int size;
    int length;
};

void display(struct array a)
{
    int i;
    printf("Dispalying array elements: \n");
    for(i=0; i<a.length; i++)
    printf("%d\t",a.a[i]);

}

int main()
{
    struct array arr = {{2, 3, 4, 5, 6, 7}, 10, 6};
    
    display(arr);

    return 0;

}