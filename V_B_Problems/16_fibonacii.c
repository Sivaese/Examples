// fibonacii means sum of previous two numbers

#include<stdio.h>

void main()
{
    int i, prev = 0, current = 1, new, n;
    printf("Enter number of elements: \n");
    scanf("%d",&n);

    printf("%d\t%d\t",prev,current);

    for(i=2; i<n; i++)
    {
        new = prev + current;
        printf("%d\t",new);
        prev = current;
        current = new;
    }

}