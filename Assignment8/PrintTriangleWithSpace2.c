#include <stdio.h>

int main() {
    int rows = 5;
    int i, j, k;

    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (j = 1; j <= rows - i; j++) {
            printf("   ");
        }

        // Print stars
        for (k = 1; k <= (2 * i) - 1; k++) {
            if (k == 1 || k == (2 * i) - 1 || i == rows) {
                printf("*  ");
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }

    return 0;
}
