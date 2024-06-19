#include <stdio.h>
#include <string.h>


void reverse(char *st)
{
    char new[100];
    int i = 0;
    int len = strlen(st) - 1;
    while(st[i] != '\0')
    {
        new[i] = st[len];
        len--;
        i++;
    }

    printf("%s",new);
}

void main()
{
    int num;
    scanf("%d",&num);

    char s[100];

    int i=0;
    while(num > 0)
    {
       int rem = num % 2;
        char n = rem + 48;
        s[i] = n;
        i = i+1;
        num = num / 2;
    }

    reverse(s);
    
}