#include <stdio.h>

typedef struct Employee
{
    int id;
    float marks;
    char name[20];
}emp;

void main()
{
    emp e;
    FILE *fp;
    char ch = 'y';

    fp = fopen("emp.txt","a+");

    while(ch == 'y')
    {

    printf("employee id:");
    scanf("%d",&e.id);
    printf("employee name: ");
    scanf("%s",&e.name);
    printf("employee marks: ");
    scanf("%f",&e.marks);

    fprintf(fp,"%d\t%s\t%f\n",e.id,e.name,e.marks);

    printf("Do you want to add more details (y/n): \n");
    fflush(stdin);
    ch = getchar();
    }

    printf("Reading employee details form emp.txt file: \n");

    rewind(fp);

    while((fscanf(fp,"%d%s%f",&e.id,&e.name,&e.marks) )!= EOF)
    {
        printf("%d\t%s\t%f\n",e.id,e.name,e.marks);
    }

    fclose(fp);

}