#include <stdio.h>

int main() {
    int n = 4; // Number of rows in the pattern

    // Loop for rows
    for (int i = 0; i < n; i++) {
        // Loop for numbers in decreasing order
        for (int j = 1; j < n - i; j++) {
            printf("%d", j);
        }

        // Loop for spaces
        for (int k = 1; k <= 2 * i; k++) {
            printf(" ");
        }

        // Loop for numbers in increasing order
        for (int j = n - i; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
