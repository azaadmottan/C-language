#include<stdio.h>
int main()
{
    int n,a;
    printf("Enter the valus of a\n");
    scanf("%d",&a);
    printf("Enter the value of n\n");
    scanf("%d",&n);
    do
    {
        printf("The value of a is %d\n",a);
        a++;
    }
    while(a<=n);
    
    return 0;
}