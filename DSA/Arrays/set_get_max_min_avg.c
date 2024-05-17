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

int Get(struct array name, int index)
{
    if(index >= 0 && index <= name.length)
    return name.a[index];

    return -1;
}

void Set(struct array *name, int index, int new_value)
{
    if(index >= 0 && index <= name->length)
    name->a[index] = new_value;
}

int Max(struct array name)
{
    int i, max;
    max = name.a[0];
    for(i=1; i<name.length; i++)
    {
        if(name.a[i] > max)
        {
            max = name.a[i];
        }  
    }

    return max;
}

int Min(struct array name)
{
    int i, min = name.a[0];
    for(i=1; i<name.length; i++)
    {
        if(name.a[i] < min)
        min = name.a[i];
    }

    return min;
}

int Sum(struct array name)
{
    int i, sum = 0;
    for(i=0; i<name.length; i++)
    {
        sum += name.a[i];
    }

    return sum;
}

int Avg(struct array name)
{
    int i, avg = 0, sum = 0;
    for(i=0; i<name.length; i++)
    {
        sum += name.a[i];
    }

    return (sum / name.length);
}

int main()
{
    struct array arr = {{2, 3, 4, 5, 6, 7}, 10, 6};
    
    printf("%d\n",Get(arr,9)); // 1

   Set(&arr,5,10); // setting index 5 is 10
    display(arr);

    printf("\n%d\n",Max(arr)); // Max = 10
   printf("%d\n",Min(arr)); // min = 2

   printf("%d\n",Sum(arr)); // sum = 30

   printf("%d\n",Avg(arr)); // avg = 5
    
   // display(arr);

    return 0;

}