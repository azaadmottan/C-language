#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    float p,q,d;
    printf("Enter the value of a, b & c\n");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;

    if(d>0)
    {
        p=(-b+sqrt(d))/2*a;
        printf("%f is the first root \n",p);

        q=(-b-sqrt(d))/2*a;
        printf("%f is the second root \n",q);
    }
    else if(d==0)
    {
        p=(-b/2*a);
        printf("%f is the first root \n",p);
        
        q=(-b/2*a);
        printf("%f is the second root \n",q);
    }
    else
    {
        printf("roots are imaginary");
    }
    return 0;
}