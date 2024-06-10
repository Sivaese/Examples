/*
1. only one disk
from a to c using b
2. two disks
disk one from a to b using c
from a to c using b
disk one from b to c using a
3. three disks
disks(n-1) form a to b using c
from a to c using b
disk one from b to c using a
*/

#include <stdio.h>


void TOH(int n, int a, int b, int c)
{
    if(n>0)
    {
        TOH(n-1,a,c,b);
        printf("form %d to %d\n",a,c);
        TOH(n-1,b,a,c);
    }
}

void main()
{
    TOH(3,1,2,3);
}