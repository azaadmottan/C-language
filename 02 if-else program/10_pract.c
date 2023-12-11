#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    int total=500;
    int sum;
    float percent;

    printf("Enter your marks\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    
    sum=a+b+c+d+e;
    percent=(float)(sum*100)/total;

    printf("You percentage is %f\n",percent);

    if(a>33 && b>33 && c>33 && d>33 && e>33)
    {
        printf("You are pass\n");
    }
    else if(a<33 || b<33 || c<33 || d<33 || e<33 )
    {
        printf("You are fail\n");
    }
    return 0;

}