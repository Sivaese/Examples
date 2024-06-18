#include <stdio.h>

int count(int a[], int n)
{
    int i, j, count = 0;
    int isDistinct = 1;
    for(i=0;i<n;i++)
    {
        isDistinct = 1;

        for(j=i-1;j>=0;j--)
        {
            if(a[i]==a[j])
            {
                isDistinct = 0;
                break;
            }
        }

        if(isDistinct == 1)
            count++;
    }
    

    return count;
}
int main()
{
    int i,n;
    printf("Enter size of the array : \n");
    scanf("%d",&n);
    int a[n];
    printf("Writing array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    
    printf("Count is: %d\n",count(a,n));

    return 0;
}