// lower case to upper case

#include<stdio.h>

void main()
{
    char ch[] = "welcome";
    int i;
    for(i=0; ch[i] != '\0'; i++)
    {
        printf("%c",ch[i]-32);
    }
}