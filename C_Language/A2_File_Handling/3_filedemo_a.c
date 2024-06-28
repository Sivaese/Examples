#include <stdio.h>

int main()
{
    FILE *p = fopen("xyz.txt","a");

    if(p == NULL)
    printf("file is not created.\n");
    else
    printf("file is created / opened.\n");

    fclose(p);

    return 0;
}