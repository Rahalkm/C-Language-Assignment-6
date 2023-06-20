#include <stdio.h>

int main() {
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Upper half of the heart
    for (i = n / 2; i <= n; i += 2) {
        // Print spaces before the stars
        for (j = 1; j < n - i; j += 2) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }

        // Print spaces in between the two halves
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    // Lower half of the heart
    for (i = n; i >= 1; i--) {
        // Print spaces before the stars
        for (j = i; j < n; j++) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= (i * 2) - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
