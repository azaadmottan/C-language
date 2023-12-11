#include<stdio.h>
int main()
{
    int i,aadhar[2];

    //input
    printf("Enter your aadhar number:");

    for(i=0;i<2;i++)
    {
        scanf("%d",&aadhar[i]);
    }

    //output
    printf("Verify your aadhar number:");

    for(i=0;i<2;i++)
    {
        printf("%d\t",aadhar[i]);
    } 

    return 0;
}