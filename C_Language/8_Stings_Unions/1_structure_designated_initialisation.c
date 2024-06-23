#include <stdio.h>

struct student
{
    int roll_num;
    char name[30];
};

struct data
{
    int item1, item2;
};

void main()
{
    struct student s = {18, "siva"};
    struct data d = {.item2 = 20, .item1 = 10};
    printf("%d %d\n",d.item1,d.item2);
    printf("%d %s\n",s.roll_num,s.name);
}