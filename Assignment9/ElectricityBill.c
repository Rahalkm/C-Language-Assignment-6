#include <stdio.h>

int main() {
    float units, bill, surcharge, totalBill;

    printf("Enter the electricity units consumed: ");
    scanf("%f", &units);

    switch ((int)units / 50) {
        case 0:
            bill = units * 0.50;
            break;
        case 1:
            bill = 50 * 0.50 + (units - 50) * 0.75;
            break;
        case 2:
            bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
            break;
        default:
            bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
            break;
    }

    surcharge = bill * 0.20;
    totalBill = bill + surcharge;

    printf("Total Electricity Bill: Rs. %.2f\n", totalBill);

    return 0;
}
