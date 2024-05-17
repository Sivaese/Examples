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

void insertatEnd(struct array *name, int y)
{
    if(name->length < name->size)
    name->a[name->length++] = y;
}

int main()
{
    struct array arr = {{2, 3, 4, 5, 6, 7}, 10, 6};
    int x = 12;
    insertatEnd(&arr,x); // call by address and value
    display(arr);

    return 0;

}