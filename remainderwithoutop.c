#include <stdio.h>

int remainder(int dividend, int divisor) {
    if (divisor == 0) {
        printf("Division by zero is undefined.\n");
        return -1; 
    }

    
    int sign = 1;
    if (dividend < 0) {
        dividend = -dividend;
        sign = -sign;
    }
    if (divisor < 0) {
        divisor = -divisor;
        sign = -sign;
    }

    while (dividend >= divisor) {
        dividend = dividend - divisor;
    }

    return sign * dividend;
}

int main() {
    int a, b;
    printf("Enter dividend: ");
    scanf("%d", &a);
    printf("Enter divisor: ");
    scanf("%d", &b);

    int rem = remainder(a, b);
    if (rem != -1)
        printf("Remainder of %d / %d is %d\n", a, b, rem);

    return 0;
}