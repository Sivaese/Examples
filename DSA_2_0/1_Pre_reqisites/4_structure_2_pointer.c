#include <stdio.h>
#include <stdlib.h>

struct Rectangle
{
    int length;
    int breadth;
};

void main()
{
    
    /*struct Rectangle a;
    a.length = 10; //accessing normal variable
    a.breadth = 5;

    struct Rectangle *p = &a; //&a - object
    p->length = 25;
    p->breadth = 25;

    printf("%d\n",a.length * a.breadth);
    printf("%d\n",p->length * p->breadth); */

    //dynamically allocating memory
    struct Rectangle *ptr;
    ptr = (struct Rectangle *)malloc(5*sizeof(struct Rectangle));
    if(ptr == NULL)
    {
        printf("Memory is not allocated.\n");
        exit(0);
    }

    ptr->length = 20;
    ptr->breadth = 10;

    printf("%d\n",ptr->length * ptr->breadth);
    
}