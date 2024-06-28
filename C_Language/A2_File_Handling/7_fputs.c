#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fp;
    char str[200];

    fp = fopen("hello123.txt","r");

    if(fp == NULL)
    {
        printf("file is not existing.\n");
        exit(0);
    }

    fp = fopen("hello123.txt","w");
    puts("Enter data: ");
    gets(str);
    fputs(str,fp);

    fclose (fp);
    //printf("%s",str);
}