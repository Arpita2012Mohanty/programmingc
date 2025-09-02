#include<stdio.h>
int main()
{
    printf("Size of Integer:%zu bytes\n",sizeof(int));
    printf("Size of ShortFloat:%zu bytes\n",sizeof(float));
    printf("Size of Character:%zu bytes\n",sizeof(char));
    printf("Size of Double:%zu bytes\n",sizeof(double));
    return 0;
}