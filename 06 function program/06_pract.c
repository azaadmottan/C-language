#include<stdio.h>
#include<math.h>

void quad(int x,int y,int z)
{
    int d = y*y-4*x*z;

    if(d>0)
    {
        int p = (-y + sqrt(d))/2*x;
        int q = (-y - sqrt(d))/2*x;

        printf("%d is the first root\n",p);
        printf("%d is the second root\n",q);
    }
    else if(d==0)
    {
        int p = (-y)/2*x;
        int q = (-y)/2*x;

        printf("%d is the first root\n",p);
        printf("%d is the second root\n",q);
    }
    else
    {
        printf("Roots are imaginary");
    }
}

int main()
{
    int a,b,c;

    printf("Enter the value of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    
    quad(a,b,c);
    
    return 0;
}