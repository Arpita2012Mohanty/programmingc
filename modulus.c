#include <stdio.h>
int main() {
    int a, b, result;
    printf("Enter two integers (dividend and divisor): ");
    scanf("%d %d", &a, &b);
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 1;
    }
    result = a % b;
    printf("Result of %d %% %d = %d\n", a, b, result);

    return 0;
}