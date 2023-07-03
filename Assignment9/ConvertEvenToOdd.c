
#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    switch (number % 2) {
        case 0:
            number++;
            printf("Upper Nearest Odd Number: %d\n", number);
            break;
        default:
            printf("The number is already odd.\n");
            break;
    }

    return 0;
}
