#include <stdio.h>
#include <string.h>

int main()
{
    char s1[50] = "siva";
    char s2[] = "welcome";
    strncat(s1, s2, 7);
    printf("%s \n",s1); //sivawelcom
    char s3[50] = "ram";
    strncat(s3,s2,8);
    printf("%s \n",s3); //ramwelcome

    return 0;
}