#include <stdio.h>


/*//fibonacii in iterative model
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
*/

/*
//recursive fibonacii
int rfib(int n)
{
    if(n == 0 || n == 1)
    return n;
    else
        return rfib(n-2)+rfib(n-1);

}

void main()
{
    printf("%d\n",rfib(8));
}

*/

//recursive memorization
int m[10];

int mfib(int n)
{
    if(n == 1 || n == 0)
    {
        m[n] = n;
        return n;
    }
    if(m[n-2] == -1)
    m[n-2] = mfib(n-2);
    if(m[n-1] == -1)
    m[n-1] = mfib(n-1);

    m[n] = mfib(n-2)+mfib(n-1);

    return mfib(n-2)+mfib(n-1);
    

}

void main()
{
    int i;
    for(i=0;i<10;i++)
    m[i] = -1;

    printf("%d ",mfib(8));

}