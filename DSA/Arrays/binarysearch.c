#include<stdio.h>

struct array
{
    int a[10];
    int size;
    int length;
};

void display(struct array a)
{
    int i;
    printf("Dispalying array elements: \n");
    for(i=0; i<a.length; i++)
    printf("%d\t",a.a[i]);

}

int BinearSearch(struct array name, int key)
{
    int i, l = 0, h = name.length-1, mid;
    while(l <= h)
    {
        mid = (l+h)/2;
        if(key == name.a[mid])
        return mid;
        else if(key < name.a[mid])
        h = mid - 1;
        else
        l = mid + 1;
    }
    
    return -1;
}

// recusive approach
int RBinSearch(int a[], int l, int h, int key)
{
    int mid;
    if(l <= h)
    {
        mid = (l+h)/2;
        if(key == a[mid])
        return mid;
        else if(key < a[mid])
        return RBinSearch(a,l,mid-1,key);
        else
        return RBinSearch(a, mid+1, h, key);
    }

    return -1;
}

int main()
{
    struct array arr = {{2, 3, 4, 5, 6, 7}, 10, 6};
    
    printf("Key found at index: %d\n",BinearSearch(arr,7));

    printf("Key found at index: %d\n",RBinSearch(arr.a,0,arr.length-1,15));
    
    display(arr);

    return 0;

}