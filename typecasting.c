#include <stdio.h>

int main() {
    
    int intVal = 5;
    float floatResult;

    
    floatResult = intVal + 3.2;

    printf("Implicit Type Casting:\n");
    printf("intVal = %d\n", intVal);
    printf("floatResult = intVal + 3.2 = %.2f\n\n", floatResult);

    
    float floatVal = 7.8;
    int intResult;

    
    intResult = (int) floatVal;

    printf("Explicit Type Casting:\n");
    printf("floatVal = %.2f\n", floatVal);
    printf("intResult = (int) floatVal = %d\n", intResult);

    return 0;
}
