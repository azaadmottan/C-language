#include<stdio.h>
int main()
{
    int i;
    float price[5],GST;

    //input
    for(i=0;i<5;i++)
    {
        printf("Enter price of item %d:",i+1); 
        scanf("%f",&price[i]);
    }

    //output
    for(i=0;i<5;i++)
    {
        GST = (price[i]+(0.18)*price[i]);
        printf("Total price of item %d with GST(18 percent) is %f\n",i+1,GST);
    }
    return 0;
}