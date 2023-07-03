#include <stdio.h>

int main() {
    int day;

    printf("Enter the day number (1-7): ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Monday: Welcome to a new week!\n");
            break;
        case 2:
            printf("Tuesday: Keep up the good work!\n");
            break;
        case 3:
            printf("Wednesday: Halfway through the week!\n");
            break;
        case 4:
            printf("Thursday: Just one more day to go!\n");
            break;
        case 5:
            printf("Friday: It's finally the weekend!\n");
            break;
        case 6:
            printf("Saturday: Enjoy your weekend!\n");
            break;
        case 7:
            printf("Sunday: Relax and recharge!\n");
            break;
        default:
            printf("Invalid day number!\n");
            break;
    }

    return 0;
}
