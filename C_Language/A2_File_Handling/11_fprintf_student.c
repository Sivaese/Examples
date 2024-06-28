#include <stdio.h>


void main()
{
    FILE *fp;
    int roll_num;
    char name[20];
    float marks;

    
    fp = fopen("student.txt","a+");

    printf("Enter roll number:");
    scanf("%d",&roll_num);
    printf("Enter name:");
    scanf("%s",&name);
    printf("Enter marks:");
    scanf("%f",&marks);

    fprintf(fp,"Roll_num=%d\n",roll_num);
    fprintf(fp,"name:%s\n", name);
    fprintf(fp,"marks:%f\n",marks);

    fclose(fp);

    char str[200];

    printf("Reding data from the student.txt file: \n");

    fp = fopen("student.txt","r");

    while((fscanf(fp,"%s",str)) != EOF)
    {
        printf("%s\n",str);
    }

    fclose(fp);

}