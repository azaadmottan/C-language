#include<stdio.h>
#include<string.h>

struct library 
{
    int accnumber;
    char title[20],author[20],flag[10];
    float price;
};

int main()
{
    printf("Name     :Azaad Mottan\nRoll no. :2107264\nBranch   :B.tech(C.S.E)\n");
    
    int m,i;

    printf("\nEnter number of books:");
    scanf("%d",&m);

    struct library l[m];

    for(i=0; i<m; i++)
    {
        printf("\nEnter detail of book (%d)\n\n",i+1);
        printf("Enter accession number of book(%d)  :",i+1);
        scanf("%d",&l[i].accnumber);
        printf("Enter title of book(%d)             :",i+1);
        scanf("%s",&l[i].title);
        printf("Enter author name of book(%d)       :",i+1);
        scanf("%s",l[i].author);
        printf("Enter price of book(%d)             :",i+1);
        scanf("%f",&l[i].price);
        printf("Enter book(%d) is issue (yes or no) :",i+1);
        scanf("%s",l[i].flag); 
        printf("\n");
    }
   
    for(i=0; i<m; i++)
    {
        printf("Detail of book(%d):\n\n",i+1);
        printf("Accession number of book(%d) :%d\n",i+1,l[i].accnumber);
        printf("Title of book(%d)            :%s\n",i+1,l[i].title);
        printf("Author of book(%d)           :%s\n",i+1,l[i].author);
        printf("Price of book(%d)            :%.3f\n",i+1,l[i].price);
        printf("Book(%d) is (issue or not)   :%s\n",i+1,l[i].flag);
        printf("\n"); 
    }
    return 0;
}