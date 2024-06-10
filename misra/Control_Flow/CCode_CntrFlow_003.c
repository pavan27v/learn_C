#include <stdio.h>

int main() {
    int x = 5;


   x >= 3u; // answer is discarded

    // Corrected statement with a side-effect
    if (x >= 3u) {
        printf("x is greater than or equal to 3\n");
    } else {
        printf("x is less than 3\n");
    }

    return 0;
}

