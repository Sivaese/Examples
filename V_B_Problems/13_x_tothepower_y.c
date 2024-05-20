#include<stdio.h>

void main()
{
    int x, y, power = 0;
    scanf("%d %d",&x,&y);
    printf("x = %d\ny = %d\n",x,y);

    for(int i = 1; i <= y; i++)
    {
        if(i == 1)
        power = x * i;
        else
        power *= x;
    }

    printf("%d\n",power);
}