#include <stdio.h>

int main() {
    float num1, num2, product;

    
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    
    product = num1 * num2;


    printf("Product of %.2f and %.2f is %.2f\n", num1, num2, product);

    return 0;
}