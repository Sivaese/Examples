#include <stdio.h>

struct Rect
{
    int length;
    int breadth;
};

/*
//call by vlaue
int area(struct Rect re)
{
    re.breadth = 20;
    printf("called fun area is: %d\n",re.length * re.breadth);

    return (re.length * re.breadth);
}

void main()
{
    struct Rect r = {10,5};
    printf("Before call area is: %d\n",r.length * r.breadth);

    printf("call area is: %d\n",area(r));

    printf("After call area is: %d\n",r.length * r.breadth);
}

*/

//call by address
/*void changeLength(struct Rect *are, int new_len)
{
    are->length = new_len;
}

void main()
{
    struct Rect r = {10, 5};

    changeLength(&r,20);

    printf("area: %d\n",r.length * r.breadth);
}
*/

//generally pass an array means we pass address only
//even an array as a member there inside the structure it can be pass by value
struct test
{
    int a[5];
    int n;
};

void fun(struct test x)
{
    x.a[0] = 10;
    x.a[1] = 12;

    for(int i=0; i<x.n; i++)
    printf("%d\n",x.a[i]);
}

void main()
{
    struct test t1 = {{1,2,3,4,5}, 5};

    fun(t1);
    printf("\n");

    for(int i=0; i<t1.n; i++)
    printf("%d\n",t1.a[i]);
}