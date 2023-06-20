#include <stdio.h>

void printPattern(int n) {
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            printf(" ");
        }

        for (j = 0; j < n - i; j++) {
            printf("%c", 'A' + j);
        }

        for (j = n - i - 2; j >= 0; j--) {
            printf("%c", 'A' + j);
        }

        printf("\n");
    }
}

int main() {
    int n = 5;  // number of rows

    printPattern(n);

    return 0;
}
