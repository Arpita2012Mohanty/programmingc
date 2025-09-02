#include <stdio.h>
int main() {
    unsigned int number, n, result;
    printf("Enter an integer number: ");
    scanf("%u", &number);
    printf("Enter the bit position to set (starting from 0): ");
    scanf("%u", &n);
    result = number | (1 << n);
    printf("\nOriginal number      = %u\n", number);
    printf("Number after setting bit %u = %u\n", n, result);
    printf("Binary before: ");
    for (int i = 31; i >= 0; i--)
        printf("%d", (number >> i) & 1);

    printf("\nBinary after : ");
    for (int i = 31; i >= 0; i--)
        printf("%d", (result >> i) & 1);

    printf("\n");

    return 0;
}