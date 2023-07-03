#include <stdio.h>

int isIsosceles(int a, int b, int c) {
    return (a == b || b == c || c == a);
}

int isRightAngled(int a, int b, int c) {
    return (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b);
}

int isEquilateral(int a, int b, int c) {
    return (a == b && b == c);
}

int main() {
    int choice, side1, side2, side3;

    do {
        printf("Menu:\n");
        printf("a. Check whether a given set of three numbers are lengths of an isosceles triangle or not\n");
        printf("b. Check whether a given set of three numbers are lengths of sides of a right-angled triangle or not\n");
        printf("c. Check whether a given set of three numbers are lengths of an equilateral triangle or not\n");
        printf("d. Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case 'a':
                printf("Enter the three side lengths: ");
                scanf("%d %d %d", &side1, &side2, &side3);
                if (isIsosceles(side1, side2, side3))
                    printf("The given set of numbers form an isosceles triangle.\n");
                else
                    printf("The given set of numbers do not form an isosceles triangle.\n");
                break;
            case 'b':
                printf("Enter the three side lengths: ");
                scanf("%d %d %d", &side1, &side2, &side3);
                if (isRightAngled(side1, side2, side3))
                    printf("The given set of numbers form a right-angled triangle.\n");
                else
                    printf("The given set of numbers do not form a right-angled triangle.\n");
                break;
            case 'c':
                printf("Enter the three side lengths: ");
                scanf("%d %d %d", &side1, &side2, &side3);
                if (isEquilateral(side1, side2, side3))
                    printf("The given set of numbers form an equilateral triangle.\n");
                else
                    printf("The given set of numbers do not form an equilateral triangle.\n");
                break;
            case 'd':
                printf("Exiting the program...\n");
                break;
            default:
                printf("Invalid choice!\n");
                break;
        }

        printf("\n");
    } while (choice != 'd');

    return 0;
}
