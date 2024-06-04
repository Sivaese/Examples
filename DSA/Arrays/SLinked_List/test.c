#include <stdio.h>

int main(void) 
{
	// your code goes here
    int t, n, m, q;
    //scanf("%d",&t);
   // while(t--)
   // {
        scanf("%d %d",&n,&m);
       // if(n >= 1 && n <= 1000 && m >= 1 && m <= 1000)
       // {
            if(n % m == 0)
            {
                q = n / m;
                printf("%d\n",q);
                if(q % 2 == 0)
                {
                    printf("Yes\n");
                }
                else
                {
                    printf("No\n");
                }
                
            }
           else
            printf("No\n");
       // }
        
    //}
    
    return 0;
}

