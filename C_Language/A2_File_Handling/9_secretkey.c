#include <stdio.h>

void main()
{
    FILE *fp;
    int key = 0;

    fp = fopen("secretkey.dat","w");

    printf("Enter secret key: \n");
    scanf("%d",&key);
    
    putw(key,fp);

    fclose(fp);

}