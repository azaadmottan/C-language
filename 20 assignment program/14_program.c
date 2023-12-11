#include<stdio.h>
#include<string.h>

void bank(int ac_number,char name[20],float balance);
int main()
{
    printf("Name     :Azaad Mottan\nRoll no. :2107264\nBranch   :B.tech(C.S.E)\n");
    
    int ac_number;
    char name[20],cus_name[20];
    float balance;

    printf("\nEnter account number :");
    scanf("%d",&ac_number);
    printf("Enter name           :");
    scanf("%s",name);
    printf("Enter balance        :");
    scanf("%f",&balance);
    bank(ac_number,name,balance);

    return 0;
}

void bank(int ac_number,char name[20],float balance)
{
    int c;
    float total,m;
    printf("\nAccount number is    :%d\n",ac_number);
    printf("Customer name is     :%s\n",name);
    printf("Account balance is   :%.4f\n",balance);
    
    printf("\n");

    if(balance < 100)
    {
        printf("Your balance is low !\n");
        printf("If you want withdrawl or deposit money (enter 1 for deposit or 0 for withdrawl):");
        
        scanf("%d",&c);
        switch(c)
        {
            case 1: printf("\nEnter money:");
                    scanf("%f",&m);
                    break;
            case 0: printf("The balance is insufficient for withdrawl money !\n");
                    break;
            default: printf("Invalid number !\n");
        }
       
    }
    printf("\nAccount number    :%d\nCustomer name     :%s\nTotal balance is  :%.4f",ac_number,name,balance+m);
    
}