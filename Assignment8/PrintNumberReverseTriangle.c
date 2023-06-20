#include <stdio.h>

int main() {
    int n = 4; // Number of lines in the pattern

    for (int i = n; i >= 1; i--) {
        // Print spaces before the digits
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }

        // Print digits in increasing order
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // Print digits in decreasing order
        for (int j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
