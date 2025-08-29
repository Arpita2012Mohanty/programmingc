#include<stdio.h>
int main()
{
    int a;
    printf("enter a integer:");
    scanf("%d",&a);
    if(a/2*2==a)
    {
        printf("%d is even \n",a);
    }
    else{
        printf("%d is  odd \n",a);
    }
    return 0;
}