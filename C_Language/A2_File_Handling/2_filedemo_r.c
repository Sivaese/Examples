#include <stdio.h>

int main()
{
    FILE *ptr;

    ptr = fopen("abc.txt","r"); // opening a file

    if(ptr == NULL)
        printf("file is not created.\n");
    else
        printf("file is created / opened.\n");

    fclose(ptr); // closing a file
        
    return 0;
}