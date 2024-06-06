#include <stdio.h>
#include <stdlib.h>

#define size 10

/*
struct array
{
    int A[10];
    int size;
    int length;
};

void display(struct array a)
{
    int i;
    for(i=0;i<a.length;i++)
    printf("%d\t",a.A[i]);
}

void insetAtEnd(struct array a, int new_element)
{
    a.A[a.length] = new_element;
    a.length++;
    display(a);
}

void insertAtBegin(struct array a, int pos, int element)
{
    int i;
    if(pos >= 0 && pos < a.length)
    {

        for(i=a.length-1; i>pos-1; i--)
        {
            a.A[i+1] = a.A[i];
        }
    
        a.A[pos] = element;
        a.length++;

        display(a);
    }
}


void main()
{
  int i;
  struct array a;
  printf("Enter range of array : \n");
  scanf("%d",&a.length);

  for(i=0;i<a.length;i++)
  {
    scanf("%d",&a.A[i]);
  }

  //display(a);

  //insetAtEnd(a,20);

  insertAtBegin(a,0,20);

}
*/
void display(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

void insertAtEnd(int a[], int n, int new_element)
{
    a[n] = new_element;
    n++;
    display(a, n);
}

void insertAtBegin(int a[], int n, int pos, int element)
{
    int i;
    if(pos >= 0 && pos < n)
    {

        for(i=n-1;i>pos-1;i--)
        {
            a[i+1] = a[i];
        }

            a[pos] = element;
            n++;

        display(a,n);
    }

}


void main()
{
    int a[size], i, n;
    printf("Enter num of array elements are: \n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    insertAtBegin(a,n,0,8);

}