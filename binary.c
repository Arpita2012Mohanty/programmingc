#include <stdio.h>

int countSetBits(unsigned int num) {
    int count = 0;
    while (num) {
        count += num & 1;   
        num >>= 1;          
    }
    return count;
}
int main() {
    unsigned int number;
    printf("Enter a positive integer: ");
    scanf("%u", &number);
    int setBits = countSetBits(number);
    printf("Number of set bits in %u is: %d\n", number, setBits);

    return 0;
}