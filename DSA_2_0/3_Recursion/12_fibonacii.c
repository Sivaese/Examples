#include <stdio.h>

//fibonacii in iterative model
void fib(int x, int y, int n)
{
    int z, i;
    
    for(i=2;i<n;i++)
    {
        z = x + y;
        x = y;
        y = z;

        printf(" %d",z);
    }

}
void main()
{
    int x = 0, y = 1, n;
    printf("Enter number: \n");
    scanf("%d",&n);
    printf("%d %d",x,y);
    fib(x,y,n);
}