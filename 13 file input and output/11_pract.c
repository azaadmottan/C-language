#include<stdio.h>

int main()
{
    int id;
    char name[20];
    float salary;

    FILE *ptr;
    ptr = fopen("11.txt","w");

    printf("Enter your id :");
    scanf("%d",&id);
    
    printf("Enter your name :");
    scanf("%s",name);

    printf("Enter your salary :");
    scanf("%f",&salary);

    fprintf(ptr,"id :%d\n",id);
    fprintf(ptr,"Name :%s\n",name);
    fprintf(ptr,"Salary :%.2f\n",salary);

    fclose(ptr);

    return 0;
}