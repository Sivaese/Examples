#include <stdio.h>

void main()
{
    int a[10] = {6,2,4,3,1,10,15,18,20,22};
    int i, index, ret;
    printf("Enter index number: \n");
    scanf("%d",&index);
    if(index >= 0 && index < 10)
    {
        for(i=0;i<10;i++)
        {
            if(i==index)
            ret = a[index];
        }

        printf("%d\n",ret);
    }

    
}