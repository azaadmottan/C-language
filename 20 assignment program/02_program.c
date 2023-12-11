#include<stdio.h>

int main()
{
    printf("Name     :Azaad Mottan\nRoll no. :2107264\nBranch   :B.tech(C.S.E)\n");
    
    float tot_p=50000;
    float tot_men,tot_women,tot_lit,tot_lit_men,tot_lit_women,tot_ill_men,tot_ill_women;
    
    tot_men = (float)49/100*tot_p;
    tot_lit = (float)62/100*tot_p;
    tot_lit_men = (float)35/100*tot_p;

    tot_ill_men = tot_men - tot_lit_men;

    tot_women = tot_p - tot_men;

    tot_lit_women = tot_lit - tot_lit_men;

    tot_ill_women = tot_women - tot_lit_women;
    

    printf("\nTotal population in town is %.2f\n",tot_p);
    printf("Total literate men is %.2f\n",tot_lit_men);
    printf("Total literate women is %.2f\n",tot_lit_women);
    printf("Total illiterate men in town is %.2f\n",tot_ill_men);
    printf("Total illiterate women in town is %.2f\n",tot_ill_women);

    return 0;
}