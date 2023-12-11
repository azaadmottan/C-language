#include<stdio.h>

int main()
{
    FILE *ptr;

    ptr = fopen("04.txt","w");

    fprintf(ptr,"%c",'A');                    // here we use fprintf (write in the file)
    fprintf(ptr,"%c",'z');
    fprintf(ptr,"%c",'a');
    fprintf(ptr,"%c",'a');
    fprintf(ptr,"%c",'d');

    fprintf(ptr,"%c",' ');
    fprintf(ptr,"%c",'M');
    fprintf(ptr,"%c",'o');
    fprintf(ptr,"%c",'t');
    fprintf(ptr,"%c",'t');
    fprintf(ptr,"%c",'a');
    fprintf(ptr,"%c",'n');

    fclose(ptr);

    return 0;
}