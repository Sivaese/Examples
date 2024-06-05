#include <stdio.h>

//Iterative method
/*int fact(int n)
{
    int i, f = 1;
    for(i=1;i<=n;i++)
        f *= i;

    return (f);
}

void main()
{
    int num, result;
    printf("Enter a number: \n");
    scanf("%d",&num);
    result = fact(num);
    printf("Factorial of a %d is %d\n",num,result);

}
*/

int fact(int n)
{
    if(n == 0 || n == 1)
    return 1;
    else
    return fact(n-1)*n;

}

void main()
{
    int num;
    printf("Enter a number: \n");
    scanf("%d",&num);
    printf("Factorial of a %d is : %d\n",num,fact(num));
    
}