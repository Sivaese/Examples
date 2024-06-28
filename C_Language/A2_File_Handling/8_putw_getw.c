#include <stdio.h>

void main()
{
    FILE *fp;
    int num, a = 10, b = 20, c = 30;

    fp = fopen("nums.txt","w");

    putw(a,fp);
    putw(b,fp);
    putw(c,fp);

    fclose(fp);

    fp = fopen("nums.txt","r");

    printf("Reading numeric data from nums file.\n");

    while(1)
    {
        num = getw(fp);

        if(num != EOF)
        printf("%d\n",num);
        else
        break;
    }

    fclose(fp);


}