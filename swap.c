#include<stdio.h>
int main()
{
    int a=10;
    int b=20;
    int c;
    printf("enter two number:");
    scanf("%d %d",&a,&b);
    printf("before swap:a=%d,b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swap:a=%d,b=%d\n",a,b);
    return 0;
}