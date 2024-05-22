
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*first = NULL;
 

void Create(int a[], int n)
{
    int i;
    struct node *t, *last;
    first =(struct node *)malloc(sizeof(struct node));
    first->data = a[0];
    first->next = NULL;

    last = first;

    for(i=1;i<n;i++)
    {
        t =(struct node *)malloc(sizeof(struct node));
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }

}

void display(struct node *p)
{
   while(p !=  NULL)
   {
        printf("%d\t",p->data);
        p = p->next;
   }
}

void Rdisplay(struct node *p)
{
    if(p != NULL)
    {
        printf("%d\t",p->data);
        Rdisplay(p->next);
    }
}

int count(struct node *p)
{
    int c = 0;
    while(p)
    {
        c++;
        p = p->next;
    }
    return c;
}

int Rcount(struct node *p)
{
    if(p == NULL)
    return 0;
    else
    return Rcount(p->next)+1;
}

int sum(struct node *p)
{
    int sum = 0;
    while(p)
    {
        sum = sum+p->data;
        p = p->next;
    }

    return sum;
}

int Rsum(struct node *p)
{
    if(p == NULL)
    return 0;
    else
        return Rsum(p->next)+p->data;
}

int max(struct node *p)
{
    int x = -32678;

    while(p)
    {
        if(p->data > x)
            x = p->data;

        p = p->next; 
    }

    return x;
}

int Rmax(struct node *p)
{
    int x = 0;
    if(p == NULL)
        return 0;
    else
    {
        x = Rmax(p->next);
        if(x > p->data)
            return x;
        else 
            return p->data;
    }
}

void main()
{
    int a[] = {2, 5, 7, 9, 11, 15};

    Create(a,6);

    //printf("no of nodes are: %d\n",Rcount(first));

    //Rdisplay(first);

    //printf("sum of elements are: %d\n",Rsum(first));

    printf("Max is: %d\n",Rmax(first));

    
}