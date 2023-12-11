#include<stdio.h>
#include<string.h>

void salting(char pass[]);
int main()
{
    char password[10];
    printf("Enter password:");                        // creat password 
    gets(password);

    printf("Your new password is ");
    salting(password);

    return 0;
}
void salting(char pass[])
{
    char salt[] = "123";
    char new[10]; 

    strcpy(new,pass);
    strcat(new,salt);
    puts(new);
}