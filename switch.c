#include <stdio.h>

int main() {
    char val = 'A';

    // Convert to lowercase
   // val = tolower(val);

    switch(val) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Vowel !!\n");
            break;
        default:
            printf("Not a Vowel !!\n");
            break;
    }

    return 0;
}
