#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[10], ch;
    FILE *fp;

    printf("Enter a file name: \n");
    scanf("%s",name);

    fp = fopen(name,"r");

    if(fp == NULL)
    {
        printf("file is not existing.\n");
        exit(0);
    }

    while(1)
    {
        ch = getc(fp);

        if(ch == EOF)
            break;
        else
        putchar(ch);
    }

    return 0;

}