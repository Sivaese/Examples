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

int LinearSearch(struct array name, int key)
{
    int i;
    for(i=0; i<name.length; i++)
    {
        if(key == name.a[i])
        return i;
    }

    return -1;
}

int main()
{
    struct array arr = {{2, 3, 4, 5, 6, 7}, 10, 6};
    
    printf("Key found at index: %d\n",LinearSearch(arr,15));
    
    display(arr);

    return 0;

}