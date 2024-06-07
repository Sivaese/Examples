#include <stdio.h>
#define SIZE 10


void display(int a[])
{
    int i;
    for(i=0;i<SIZE;i++)
    {
        printf("%d\t",a[i]);
    }

    printf("\n");
}

void main()
{
    int a[10] = {10, 22, 11, 55, 99, 68, 13, 19, 24, 66};
    int i, index, new_element, old_element;
    printf("Enter modified element index: \n");
    scanf("%d",&index);
    printf("Enter new element to insert the index positon: \n");
    scanf("%d",&new_element);

    display(a);

    for(i=0;i<10;i++)
    {
        if(i==index)
        {
            old_element = a[i];
            a[index] = new_element;
        }
    }

    printf("old element is: %d\n",old_element);
    display(a);

}