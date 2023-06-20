#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in the triangle

    for (int i = 0; i < rows; i++) {
        // Print spaces before the stars
        for (int j = 0; j < i; j++) {
            printf(" ");
        }

        // Print stars
        for (int k = 0; k < rows - i; k++) {
            printf("*");
        }

        printf("\n"); // Move to the next line
    }

    return 0;
}
