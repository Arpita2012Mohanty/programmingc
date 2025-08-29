#include<stdio.h>
int main()
{
    float length,width,area;
    printf("enter the length of the rectangle");
    scanf("%f",&length);
    printf("enter the width of the rectangle");
    scanf("%f",&width);
    area=length*width;
    printf("area of rectangle:%.2f\n",area);
    return 0;
}