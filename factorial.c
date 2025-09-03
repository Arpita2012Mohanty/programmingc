#include<stdio.h>
int main()
{
    int n;
    unsigned long long factorial = 1; // Use unsigned long long to handle large results

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if the input is a positive integer
    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        for (int i = 1; i <= n; ++i) {
            factorial *= i; // Multiply i to factorial
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}