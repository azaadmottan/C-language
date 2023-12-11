#include<stdio.h>
#include<string.h>

int main()
{
    FILE *ptr;
    ptr = fopen("06.txt","w");

    int rollno;
    char name[20];
    float cgpa;

    
    printf("Enter roll number:");
    scanf("%d",&rollno);
    printf("Enter name:");
    scanf("%s",name);
    printf("Enter CGPA:");
    scanf("%f",&cgpa);
    

    fprintf(ptr,"Name :%s\n",name);
    fprintf(ptr,"Roll number :%d\n",rollno);
    fprintf(ptr,"CGPA :%.2f\n",cgpa);

    fclose(ptr);

    return 0;
}