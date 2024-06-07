#include <stdio.h>

// how to return mutiple values form function 
//1. by using pointer
//2. by using structure
//3. by using array

struct count
{
    int even, odd;
};

struct count count(int arr[], int n)
{
    struct count c;
    c.even = 0, c.odd = 0;
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i] % 2 == 0)
        c.even++;
        else
        c.odd++;
    }

    return c;
}

void main()
{
    int a[10] = {25, 64, 8, 9, 78, 5, 66, 4, 11, 22};
    
    struct count cou = count(a,10);
    printf("even count is: %d\n",cou.even);
    printf("odd count is: %d\n",cou.odd);
}