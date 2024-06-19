#include <stdio.h>
#include <string.h>

void main()
{
    char s[10];
    scanf("%s",&s);

    int convert, len, base = 1, ans = 0, i;
    len =  strlen(s);
    for(i=len-1;i>=0;i--)
    {
        convert = s[i] - 48;
        ans = ans + (convert * base);
        base = base * 2;
    }

    printf("%d\n",ans);
}