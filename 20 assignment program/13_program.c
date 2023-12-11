#include<stdio.h>
#include<string.h>

struct bank
{
    int ac_number;
    char name[20];
    float balance;
};

int main()
{
    printf("Name     :Azaad Mottan\nRoll no. :2107264\nBranch   :B.tech(C.S.E)\n");
    
    int i;
    struct bank b[200];
    
    for(i=0; i<200; i++)
    {
        printf("\nEnter account number of customers (%d):",i+1);
        scanf("%d",&b[i].ac_number);
        printf("Enter name of customer (%d)           :",i+1);
        scanf("%s",&b[i].name);
        printf("Enter balance of customer (%d)        :",i+1);
        scanf("%f",&b[i].balance);
        printf("\n");
    }
    for(i=0; i<200; i++)
    {
        printf("\nAccount number of customer (%d) :%d\n",i+1,b[i].ac_number);
        printf("Name of customer (%d)             :%s\n",i+1,b[i].name);
        printf("Balance of customer (%d)          :%.2f\n",i+1,b[i].balance);
        printf("\n");
    }

    return 0;
}