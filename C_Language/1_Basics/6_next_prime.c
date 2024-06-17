#include<stdio.h>

int prime(int p)
{
    int i;
    if(p == 0 || p == 1)
    {
        printf("Not a prime.\n");
        return 0;
    }
    for(i=2;i<p;i++)
    {
        if(p % i == 0)
        {
            printf("Not a prime,\n");
            return 0;
        }
    }
    printf("Prime");

    return 0;
}

int nextPrime(int prime)
{
    
    while(1)
    {
        int i;

        for(i=2;i<prime;i++)
        {
            if(prime % i == 0)
                break;
        }
        
        if(i == prime)
            return prime;

         prime++;
    }  
   
}

void main()
{
    int n;
    printf("Enter a number: \n");
    scanf("%d",&n);

    printf("%d\n",nextPrime(n+1));
    
}