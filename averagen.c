#include<stdio.h>
int main()
{
    int i,n;
    float sum,average,number;
    printf("enter the number of elements:");
    scanf("%d",&n);
    if(n <= 0){
        printf("please enter a positive integer for the number of elements\n");
        return 1;
    }
    for(i=0;i <n; ++i){
        printf("enter number %d:",i+1);
        scanf("%f",&number);
        sum += number;
    }
    average=sum / n;
    printf("average = %2f\n",average);
    return 0;
}