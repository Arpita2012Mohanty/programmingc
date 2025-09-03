#include<stdio.h>
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int findLCM(int a, int b) {
    return (a * b) / findGCD(a, b);
}
int main() {
    int num1, num2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers only.\n");
        return 1;
    }
    int lcm = findLCM(num1, num2);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}