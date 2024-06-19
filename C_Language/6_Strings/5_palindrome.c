#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%s",&str);

    int start = 0;
    int end =  strlen(str) - 1;
    while(start < end)
    {
        if(str[start] != str[end])
        {
            printf("No.");
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
    printf("Yes\n");

    return 0;
}