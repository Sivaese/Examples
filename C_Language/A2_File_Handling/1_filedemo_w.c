#include <stdio.h>

int main()
{
    FILE *ptr;

    ptr = fopen("hello.txt","w");

    if(ptr == NULL)
        printf("file is not created.\n");
    else
        printf("file is created / opened.\n");

    return 0;
}