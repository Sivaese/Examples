#include <stdio.h>

struct Rect
{
    int length;
    int breadth;
};

void initilise(struct Rect *R, int l, int b)
{
    R->length = l;
    R->breadth = b;
}

int area(struct Rect r)
{
    return (r.length * r.breadth);
}

void changeLength(struct Rect *r, int len)
{
    r->length = len;
}

void main()
{
    struct Rect r;
    initilise(&r,10,20);  //call by address
    printf("Area call : %d\n",area(r)); //Area call: 200 // call by value
    changeLength(&r,20); // call by address
    printf("Area : %d\n",(r.length * r.breadth)); //Area : 400
}