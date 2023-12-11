#include<stdio.h>
#include<string.h>

int main()
{
    char name[] = "Azaad mottan";                       // using string library function
    puts(name);
    int length;
    length = strlen(name);                              // using strlen
    printf("Length is %d",length);


    printf("\n");
    char newstring[] = "new";
    char oldstring[] = "old";
    strcpy(newstring,oldstring);                        // using strcpy
    puts(newstring);


    char first[] = "Hello";
    char second[] = "world";
    strcat(first,second);                               // using strcat
    puts(first);


    char third[] = "A";
    char fourth[] = "B";                                
    printf("%d",strcmp(first,second));                  // using strcmp

    return 0;
}