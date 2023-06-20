#include <stdio.h>

int main() {
    int rows = 5;  // Number of rows in the triangle

    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
