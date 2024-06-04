/*
1. pointer accessing heap
2. accessing resources
3. parameter passing
*/

#include <stdio.h>
#include <stdlib.h>

struct Rectangle
{
    int length;
    int breadth;
};

void main()
{
   /* //data variable declaration and initialisation
    int a = 10;

    //address variable declaration
    // * or astrick are used in two situation 1. pointer declaration time and 2. dereferencing time
    int *ptr;

    //address variable initialisation
    ptr = &a;

    //printing the value of a
    printf("%d\n",a);

    //printing the value of a through pointer
    //pointer de-referencing
    printf("%d\n",*ptr);

    //size of the pointer
    printf("%d\n",sizeof(ptr)); */

    /*pointer to an array
    int a[5] = {1, 2, 3, 4, 5};
    int *ptr;
    //ptr = a;
    ptr = &a[0];

    printf("%d\n",*ptr);

    for(int i = 0; i<5; i++)
    {
        //printf("%d\t",a[i]);
        printf("%d\t",ptr[i]);
    }
      */  

    //dynamic memory allocation
   /* int *ptr, n = 5, i;
    ptr = (int *)malloc(n*sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory is not allocated\n");
        exit(0);
    }
    
    printf("%x\n",ptr);

        for(i=0;i<n;i++)
        {
            scanf("%d\n",&ptr[i]);
        }

        for(i=0;i<n;i++)
        {
            printf("%d\t",ptr[i]);
        }

    printf("\n");

    //releasing the dynamically allocated memory
    free(ptr);
    ptr = NULL;
    printf("%x\n",ptr); */

    //checking the size of the pointer
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *r;

    printf("p1 = %d\n",sizeof(p1));
    printf("p2 = %d\n",sizeof(p2));
    printf("p3 = %d\n",sizeof(p3));
    printf("p4 = %d\n",sizeof(p4));
    printf("r = %d\n",sizeof(r));


    //Reference pointer
    // int a; data variable
    // int *p; address variable
    // int &r; reference variable
    // reference is another name is given to a variable and it doesn't take an extra memory.
    /*int a = 10;
    int &r = a; // declaring and initialising at the same point

    printf("%d\n",a);

    r++;

    printf("%d\n",r);
    printf("%d\n",a); */


}