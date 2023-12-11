#include<stdio.h>

int main()
{
    printf("Name     :Azaad Mottan\nRoll no. :2107264\nBranch   :B.tech(C.S.E)\n\n");

    int i,j,k,l,m;
    
    for(i=1;i<=7;i++)
    {
        for(k=65; k<=72-i;k++)
        {
            printf("%c ",k);
        }    
        for(j=2; j<=i*2-2;j++)
        {
            printf("  ");
        }

        if(i==1)   
        {
            for(l=71-i;l>=65;l--)
            {
                {
                    printf("%c ",l);
                }
            }
        }
        else 
        {
            for(l=72-i;l>=65;l--)
            {
                {
                    printf("%c ",l);
                }
            }
        }
        {
            printf("\n");
        }
    }

    return 0;
}