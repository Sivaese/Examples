#include <stdio.h>
#include <string.h>


void Search(char p[], char s[])
{
    int i, j, n, m, a;
    m = strlen(s);
    n = strlen(p);

    for(i=0;i<=n-m;i++)
    {
        a = i;
        for(j=0;j<m;j++)
        {
            if(s[a] != p[j])
            break;

            a++;
        }

        if(j == m)
        printf("Pattern found at index %d\n",i);
    }
}

void main()
{
    char s[] = "ABCCABC";
    char p[] = "ABC";
    Search(s,p);
}