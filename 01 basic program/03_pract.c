#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;
    float d;
    
    printf("enter 2 no's :");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\naddition of 2 no's:%d",c);
    c=a-b;
    printf("\nsubtraction of 2 no's:%d",c);
    c=a*b;
    printf("\nmultiplication of 2 no's:%d",c);
    d=(float)a/b;
    printf("\ndivision of 2 no's:%f",d);
    return 0;
}