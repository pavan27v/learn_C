#include <stdio.h>

void exampleFunction(int value) {
    if (value == 1) {
        printf("Value is 1\n");
        return;
        printf("This is unreachable code\n"); // This line is unreachable
    }
    printf("Value is not 1\n");
}

int main() {
    exampleFunction(1);
    return 0;
}

