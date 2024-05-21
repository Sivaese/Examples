// upper case to lower case

#include<stdio.h>

void main()
{
    char ch[] = "WELCOME";
    int i;
    for(i=0; ch[i] != '\0'; i++)
    {
        printf("%c",ch[i]+32);
    }
}