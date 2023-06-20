#include <stdio.h>

void printPattern(int n) {
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            if (i == n || j == 1 || i == j)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

int main() {
    int n = 5;
    printPattern(n);
    return 0;
}
