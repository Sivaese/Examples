#include <stdio.h>
#include <string.h>

void main()
{
    char str[] = "welcome to my world";
    char search[] = "we";
    char *ptr = strstr(str, search);
    if(ptr)
    printf("substring found at the index %ld\n",ptr-search);
    else
    printf("Not found.");

}