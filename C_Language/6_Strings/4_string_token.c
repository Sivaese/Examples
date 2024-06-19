#include <stdio.h>
#include <string.h>

void main()
{
    char str1[] = "wel-come to, my world";
    const char *sep = ", -";

    char *token = strtok(str1,sep);
    while(token)
    {
        printf("%s\n",token);
        token = strtok(NULL, sep);
    }
}