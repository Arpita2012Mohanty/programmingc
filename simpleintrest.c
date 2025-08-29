#include<stdio.h>
int main()
{
    float p,r,t,si;
    printf("enter the value of p,r,t");
    scanf("%f %f %f",&p,&r,&t);
    si=p*r*t/100;
    printf("simple intrest is:%f\n",si);
    return 0;
}