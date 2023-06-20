#include <stdio.h>

int main() {
    int rows = 6; // number of rows in the triangle

    for (int i = 0; i < rows; i++) {
        // Print spaces before the stars
        for (int j = 0; j < i; j++) {
            printf(" ");
        }

        // Print stars
        for (int k = 0; k < (2 * (rows - i) - 1); k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
