#include<stdio.h>
int  main()
{
    int a,b,c;
    int min,max;
    printf("enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    min=max=a;
    if(b < min)
    min=b;
if(c < min)
     min=c;
    if(b > max)
    max = b;
if(c > max)
max =c;
printf("minimum:%d\n",min);
printf("maximum:%d\n",max);
return 0;
}