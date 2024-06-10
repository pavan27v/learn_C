/********************************************************************************
 In this refactored example, the duplicate code for two different calculations has 
 been replaced with two separate functions: add and subtract. This approach avoids 
 code duplication and makes the code more maintainable and easier to understand.
 ********************************************************************************/




#if 0
#include <stdio.h>

int main() {
    // Duplicate code segments for calculation
    int num1 = 10;
    int num2 = 20;

    // Calculation 1
    int result1 = num1 + num2;
    printf("Result 1: %d\n", result1);

    // Calculation 2
    int result2 = num1 - num2;
    printf("Result 2: %d\n", result2);

    return 0;
} 

#endif
//Refactored Example with Reusable Function

#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    // Inputs for calculation
    int num1 = 10;
    int num2 = 20;

    // Calculation 1
    int result1 = add(num1, num2);
    printf("Result 1: %d\n", result1);

    // Calculation 2
    int result2 = subtract(num1, num2);
    printf("Result 2: %d\n", result2);

    return 0;
}

