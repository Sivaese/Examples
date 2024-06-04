#include <stdio.h>

/* // call by valule or pass by value
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void main()
{
    int x = 10, y = 5;
    swap(x,y);
    printf("%d %d\n",x,y);
}
*/

//call by reference or pass by value
void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

void main()
{
    int a = 10, b = 5;
    swap(&a,&b);
    printf("%d %d\n",a,b);
}

//pass by reference, it is possible in cpp and small programs only
/*void swap(int &p, int &q)
{
    int temp;
    temp = p;
    p = q;
    q = temp;
}

void main()
{
    int a = 10, b = 5;
    swap(a,b);
    printf("%d %d\n",a,b);
}

*/