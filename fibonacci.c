#include<stdio.h>
int main()
{
    int n,i;
    int first =0,second =1,next;
    printf("enter a number:");
    scanf("%d",&n);
    printf("fibonacci series:");
    for(i=0;i<n;i++)
    {
        if(i<=1)
        next =1;
    else{
        next=first +second;
        first =second;
        second=next;

    }
    printf("%d\n",next);
    }
    return 0;
}