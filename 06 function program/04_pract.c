#include<stdio.h>
#include<math.h>

float square(float x);
float root(float y);

int main()
{
    float a;

    printf("Enter any number to find square:");
    scanf("%f",&a);
    printf("square of %f is %f\n",a,square(a));

    float i;
    printf("Enter any number to find root:");
    scanf("%f",&i);
    printf("Root of %f is %f",i,root(i));

    return 0;
}

float square(float x)
{
    float b;
    // b = pow(x,2);
    return pow(x,2);
}

float root(float y)
{
    float j;
    j = sqrt(y);
    return j;
}