#include<stdio.h>
int main()
{
    int num1,num2,larger;
    printf("enter two integers:");
    scanf("%d %d",&num1,&num2);
    larger=(num1>num2)?num1:num2;
    printf("larger number is:%d\n",larger);
    return 0;
}