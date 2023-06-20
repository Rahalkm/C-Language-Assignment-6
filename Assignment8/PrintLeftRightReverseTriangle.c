#include <stdio.h>

int main() {
    int rows = 7;  // Number of rows in the pattern
    int i, j, k;
    char ch;

    for (i = 0; i < rows; i++) {
        ch = 'A';

        // Print the first half of the pattern
        for (j = 0; j < rows - i; j++) {
            printf("%c", ch++);
        }

        // Print the spaces
        for (k = 0; k < 2 * i; k++) {
            printf(" ");
        }

        // Print the second half of the pattern
        ch--;
        for (j = 0; j < rows - i; j++) {
            printf("%c", ch--);
        }

        printf("\n");
    }

    return 0;
}
