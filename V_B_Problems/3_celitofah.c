#include<stdio.h>

/* celsius to fahrenheit = c*(9/5) + 32.
    fahrenheit to celsius = (f - 32) * 5/9.
*/

void main()
{
    float celi, fah;
    printf("Enter celsius: \n");
    scanf("%f",&celi);
    printf("%.3f\n",(celi * 9 / 5)+32);

    printf("Enter fahrenheit: \n");
    scanf("%f",&fah);
    printf("%.3f\n",(fah-32)*5/9);

}