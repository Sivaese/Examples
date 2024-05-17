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

void insertatanyPosition(struct array *name, int index, int y)
{
    int i;
    if(index >= 0 && index <= name->length)
    {
        for(i=name->length; i>index; i--)
        {
            name->a[i] = name->a[i=1];
        }

        name->a[index] = y;

        name->length++;

    }
}

int main()
{
    struct array arr = {{2, 3, 4, 5, 6, 7}, 10, 6};
   
    insertatanyPosition(&arr, -3, 12); // call by address and value
    
    display(arr);

    return 0;

}