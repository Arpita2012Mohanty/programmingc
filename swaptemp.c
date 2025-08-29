#include<stdio.h>
int main()
{
    int a;
    int b;
    int temp;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("before swap:a=%d,b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("after swap:a=%d,b=%d\n",a,b);
    return 0;

}