#include<stdio.h>
#include<math.h>
int main()

{
    float p,r,t,ci;
    printf("enter the value of p,r,t");
    scanf("%f %f %f",&p,&r,&t);
    ci= p*(pow(1+r/100),t);
    printf("the compound intrest is: %f\n",ci);
    return 0;
}


