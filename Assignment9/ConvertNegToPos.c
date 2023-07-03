#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    switch (number >= 0) {
        case 1:
            number = -number;
            printf("Negative Number: %d\n", number);
            break;
        default:
            number = -number;
            printf("Positive Number: %d\n", number);
            break;
    }

    return 0;
}
