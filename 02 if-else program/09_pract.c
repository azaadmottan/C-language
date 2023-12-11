#include<stdio.h>
int main()

{
    int a,b,c;

    printf("Enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
    {
        if(b>c)
        {
            printf("%d>%d>%d",a,b,c);
        }
        else
        {
            printf("%d>%d>%d",a,c,b);
        }
    }   
    else if(b>c && b>a)
    {
        if(c>a)
        {
            printf("%d>%d>%d",b,c,a);
        }
        else
        {
            printf("%d>%d>%d",b,a,c);
        }
    }
    else if(c>a && c>b)
    {
        if(a>b)
        {
            printf("%d>%d>%d",c,a,b);
        }
        else
        {
            printf("%d>%d>%d",c,b,a);
        }
    }
    return 0;
}