#include<stdio.h>

struct vector
{
    int x;
    int y;
};
struct vector sumvector(struct vector v1,struct vector v2)           // using fumction 
{
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;

    return result;
}
// int sumvector(struct vector v1,struct vector v2)           // using fumction 
// {
//     struct vector result;
//     result.x = v1.x + v2.x;
//     result.y = v1.y + v2.y;

//     return result.x,result.y;
// }

int main()
{
    struct vector v1,v2,sum;
    v1.x = 2;
    v1.y = 4;
    printf("(Vector 1) \nDimension of x is %d and Dimension of y is %d\n",v1.x,v1.y);

    v2.x = 10;
    v2.y = 40;
    printf("(Vector 2) Dimension of x is %d and Dimension of y is %d\n",v2.x,v2.y);

    sum = sumvector(v1,v2);
    // sumvector(v1,v2);
    printf("Sum of x dimension is %d and Sum of y dimension is %d",sum.x,sum.y);

    return 0;
}
