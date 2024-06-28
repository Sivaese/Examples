#include <stdio.h>

void main()
{
    FILE *fp;
    int key;

    fp = fopen("secretkey.dat","r");
    key = getw(fp);

    printf("secret key is : %d\n",key);

    fclose (fp);
}