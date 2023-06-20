#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in the pattern

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }

        for (int k = i; k < rows; k++) {
            if (i == 0 || k == i || k == rows - 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }

        printf("\n");
    }

    return 0;
}
