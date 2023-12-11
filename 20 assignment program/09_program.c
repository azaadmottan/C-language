#include<stdio.h>

int sum(int num);
int main()
{
    printf("Name     :Azaad Mottan\nRoll no. :2107264\nBranch   :B.tech(C.S.E)\n");

    int n=25;
    
    printf("\nSum of first 25 natural numbers is %d",sum(n));

    return 0;
}
int sum(int num)
{
    if(num == 0)
    {
        return 0;
    }
    else
    {
        return num + sum(num-1);
    }
}