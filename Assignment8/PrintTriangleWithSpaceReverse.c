#include <stdio.h>

int main() {
    int rows = 6; // Number of rows in the pattern

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j++) {
            if (i == j || j == rows - 1 || i==0)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
