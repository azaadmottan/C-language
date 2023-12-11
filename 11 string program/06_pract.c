#include<stdio.h>
#include<string.h>

int vowel(char str[]);
int main()
{
    char str[200];
    printf("Enter a sentence:");
    // scanf("%s",str);
    gets(str);
    vowel(str);

    return 0;
}
int vowel(char str[])
{
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' )
        {
            count++;
        }
    }
    printf("There are %d vowel",count);
}