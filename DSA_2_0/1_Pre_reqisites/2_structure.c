#include <stdio.h>

struct Rectangle
{
    int length;
    int breadth;
};

void main()
{
    //struct variable declaring and initialization
    struct Rectangle r1 = {10,5};
    
    //array of structure
    struct Rectangle r[3];
    int i;

    for(i=0;i<3;i++)
    {
        scanf("%d %d",&r[i].length,&r[i].breadth);
    }

    for(i=0;i<3;i++)
    {
        printf("%d\n",r[i].length * r[i].breadth);
    }

    

    printf("size of the strcture is: %d\n",sizeof(r));
    printf("Area of the rectangle is: %d\n",r1.length * r1.breadth);

}