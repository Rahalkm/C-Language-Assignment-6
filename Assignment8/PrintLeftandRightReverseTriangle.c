#include <stdio.h>

int main() {
    int rows = 4;  // Number of rows in the triangle

    for (int i = rows; i >= 1; --i) {
        // Print stars
        for (int j = 1; j <= i; ++j) {
            printf("*");
        }

        // Print spaces
        for (int j = 1; j <= 2 * (rows - i); ++j) {
            printf(" ");
        }

        // Print stars again
        for (int j = 1; j <= i; ++j) {
            printf("*");
        }

        printf("\n");  // Move to the next line
    }

    return 0;
}
