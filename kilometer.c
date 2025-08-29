#include<stdio.h>
#define KM_TO_M 1000
int main()
{
    float km,miles;
    printf("enter distance in kilometers:");
    scanf("%f",&km);
    miles=km*0.621317;
    printf("distance in miles:%.2f",miles);
    return 0;
}