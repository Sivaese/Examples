#include <stdio.h>
#include <stdlib.h>

void main()
{
    char name[10], ch;
    FILE *fp;

    printf("Enter a file name: ");
    scanf("%s",name);

    fp = fopen(name,"r");

    if(fp != NULL)
    {
        printf("file is already existing.\n");
        exit(0);
    }

    fp = fopen(name,"w");
    
    printf("Enter file content...to save the file ctrl+z.\n");

    while(1)
    {
        ch = getchar();

        if(ch == EOF)
        break;
        else
        putc(ch,fp);

    }

    printf("file is created.\n");
}