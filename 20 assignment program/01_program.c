#include<stdio.h>

int main()
{
    printf("Name     :Azaad Mottan\nRoll no. :2107264\nBranch   :B.tech(C.S.E)\n");

    float salary,gsalary,dallowance,hallowance;

    printf("\nEnter basic salary:");
    scanf("%f",&salary);

    dallowance = 0.4*salary;
    hallowance = 0.2*salary;
    gsalary = dallowance + hallowance + salary;

    printf("Ramesh basic salary is %.2f\n",salary);
    printf("Dearance of allowance is %.2f\n",dallowance);
    printf("House rent allowance is %.2f\n",hallowance);
    printf("Ramesh gross salary is %.2f\n",gsalary);

    return 0;
}