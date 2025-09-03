#include<stdio.h>
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(num >0 ){
        if(num %2 ==0){
            printf("the number is positive and even\n");
        }
        else{
            printf("the number is positive but not even\n");
        }
    }else{
        printf("the number is not positive\n");
    }
    return 0;
}