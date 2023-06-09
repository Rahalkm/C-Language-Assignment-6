#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, root1, root2, realPart, imaginaryPart;

    printf("Enter the coefficients (a, b, c) of the quadratic equation: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    switch (discriminant > 0) {
        case 1:
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots are real and different:\n");
            printf("Root 1 = %.2f\n", root1);
            printf("Root 2 = %.2f\n", root2);
            break;
        default:
            switch (discriminant < 0) {
                case 1:
                    realPart = -b / (2 * a);
                    imaginaryPart = sqrt(-discriminant) / (2 * a);
                    printf("Roots are complex and different:\n");
                    printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
                    printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
                    break;
                default:
                    root1 = root2 = -b / (2 * a);
                    printf("Roots are real and same:\n");
                    printf("Root 1 = Root 2 = %.2f\n", root1);
                    break;
            }
            break;
    }

    return 0;
}
