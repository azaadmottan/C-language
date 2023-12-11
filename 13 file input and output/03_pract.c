#include<stdio.h>

int main()
{
    int num1,num2;
    FILE *ptr;

    ptr = fopen("03.txt","r");                      // when we take another file they show file doesn't exist

    if(ptr == NULL)
    {
        printf("File doesn't exist !");             // when file is not exist 
    }
    else
    
    {
        fscanf(ptr,"%d",&num1);                     // here we use fscanf (take number from file)
        fscanf(ptr,"%d",&num2);
        printf("First number is %d\n",num1);
        printf("Second number is %d\n",num2);

        fclose(ptr);
    }
   
    return 0;
}