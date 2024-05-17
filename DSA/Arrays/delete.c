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

void delete(struct array *name, int index)
{
    int i, del;
    
    if(index >= 0 && index < name->length)
    {
        del = name->a[index];
        printf("Deleted element is: %d\n",del);
        
        for(i=index; i<name->length-1; i++)
        {
            name->a[i] = name->a[i+1];
        }

        name->length--;
    }

}

int main()
{
    struct array arr = {{2, 3, 4, 5, 6, 7}, 10, 6};
    
    delete(&arr,6);
    display(arr);

    return 0;

}