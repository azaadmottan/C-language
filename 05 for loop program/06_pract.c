#include<stdio.h>
int main()
{
    int i,j,k,l=12345,sum=0;
    
    printf("The original number is %d\n",l);
    for(i=1;i<=5;i++)
    {   j = l%10;
        l = l/10;
        printf("Reverse number is %d,",j);
        printf("Divided number is %d\n",l);
        sum = sum+j;  
        //sum+=j;  
    }
    printf("Sum of number is %d\n",sum);

    return 0;
}