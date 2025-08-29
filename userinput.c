#include<stdio.h>
int main()
{
    char name[40];
    int age;
    float marks;
    printf("enter your name:");
    scanf("%s",&name);
    printf("enter your age:");
    scanf("%d",&age);
    printf("enter your marks:");
    scanf("%f",&marks);
    printf("your name is:%s\n",name);
    printf("your age is:%d\n",age);
    printf("%f\n",marks);
    return 0;
}