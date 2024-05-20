#include<stdio.h>

int main()
{
    int length, breadth;
    printf("Enter length and breadth of the rectangle: \n");
    scanf("%d %d",&length,&breadth);

    printf("Area of the rectangle is: %d\n",length*breadth);
    printf("Perimeter of the rectangle is: %d\n",2 * (length+breadth));

    return 0;
}