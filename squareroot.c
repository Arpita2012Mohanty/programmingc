#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter a number:");
    scanf("%f",&a);
    b=a/2;
    c=(b+(a/b))/2;
    while(c!=b)
    {
        b=c;
        c=(b+(a/b))/2;
                 
    }
    printf("square root of %.2f is %.2f",a,c);
    return 0;
}