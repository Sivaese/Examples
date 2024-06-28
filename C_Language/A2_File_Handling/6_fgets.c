#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fp;
    char str[200];

    fp = fopen("4_put_c.c","r");

    if(fp == NULL)
    {
        printf("file is not existing.\n");
        exit(0);
    }

    while(1)
    {
        if(feof(fp))
        break;
        else
        {
            fgets(str,200,fp);
            printf("%s",str);
        }
        
    }

}