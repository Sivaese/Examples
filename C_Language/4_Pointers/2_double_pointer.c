#include <stdio.h>

int x = 9;

// pass by value
/*
void fun(int *p)
{
    p = &x;
}
*/

/*void main()
{
    int *ptr = NULL;
    fun(ptr);
    if(ptr == NULL)
    printf("Not changed.");
    else
    printf("%d\n",*ptr);

}*/

// pass by address
/*
void fun(int **p)
{
    *p = &x;
}


void main()
{
    int *ptr = NULL;
    fun(&ptr);
    if(ptr == NULL)
    printf("Not changed.");
    else
    printf("%d\n",*ptr);
}

*/

//double pointer
void swap(const char **ptr1, const char **ptr2)
{
    const char *temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void main()
{
    const char *s1 = "ram";
    const char *s2 = "siva";
    swap(&s1, &s2);
    printf("%s %s",s1,s2);
}