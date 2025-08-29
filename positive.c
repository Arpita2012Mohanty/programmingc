#include<stdio.h>
int main()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    if(a>0){
        printf("a is positive number");
    }
    if(a<0){
        printf("a is negative number");
    }
    else{
        printf("a is zero");
    }
    return 0;
}