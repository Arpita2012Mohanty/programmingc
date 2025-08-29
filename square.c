#include<stdio.h>
int main()
{
    float a,square;
    printf("enter a number:");
    scanf("%f",&a);
    square=a*a;
    printf("square of %.2f is:%.2f\n",a,square);
    return 0;
}