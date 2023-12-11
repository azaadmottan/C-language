#include<stdio.h>
#include<string.h>

void string(char arr[]);                                         //functon prototype

int main()
{
    char third[] = {'a','z','a','a','d','\0'};                  //string initialization
    char fourth[] = {'m','o','t','t','a','n','\0'};

    printf("%s%s",third,fourth);
    printf("\n");
   
    char first[] = "Azaad";                                      //shortcut method to initialize string
    char second[] = "Mottan";

    string(first);                                               //functon call
    string(second);                                              
   
    char fifth[10];
    char sixth[10];

    printf("\nEnter your  first name:");
    scanf("%s",&fifth);

    printf("\nEnter your last name:");
    scanf("%s",&sixth);

    printf("your full name is %s %s",fifth,sixth);

    return 0;
}
void string(char arr[])                                          //function declaration 
{
    for(int i=0;arr[i]!='\0';i++)
    { 
        printf("%c",arr[i]);
    }
}