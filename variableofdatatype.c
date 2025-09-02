#include<stdio.h>
int main()
{
    int a=10;
    short b=5;
    long c=100000;
    long long d=10000000000;
    float e=3.14;
    double f=2.7182818284;
    long double g=3.14159268042461;
    char h='A';
    _Bool i=1;
    printf("Integer: %d\n",a);
    printf("Short: %d\n",b);
    printf("Long: %ld\n",c);
    printf("Long Long: %lld\n",d);
    printf("Float: %.2f\n",e);
    printf("Double: %.10f\n",f);
    printf("Long Double: %.14Lf\n",g);
    printf("Char: %c\n",h);
    printf("Bool: %d\n",i);
    return 0;
}