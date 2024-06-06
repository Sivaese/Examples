#include <stdio.h>

int Binarysearch(int a[], int n, int key)
{
    int l, m, h;

        l = 0;
        h = n-1;

        while(l <= h)
        {
            m = (l+h) / 2;
            if(key == a[m])
            return m;
            else if(key < a[m])
            h = m-1;
            else
            l = m+1;
        }

    return -1;
}


void main()
{
    int a[] = {2,4,8,11,13,15,18,20,22};
    int n, key;
    printf("Enter length of the array: \n");
    scanf("%d",&n);
    printf("Enter key: \n");
    scanf("%d",&key);
    
    printf("%d\n",Binarysearch(a,n,key));

    /*if(key == a[m])
    printf("Key is found.\n");
    else
    printf("Key is not found.\n");*/

}
