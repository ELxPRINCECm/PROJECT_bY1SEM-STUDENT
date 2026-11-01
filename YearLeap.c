
#include <stdio.h>

int main() {
    int year;

    printf("-- HERE YOU CAN CHECK YOUR YEAR IS LEAP YEAR OR NOT --\n");
    printf("                 -CREATED BY PRINCE-\n");

    printf("ENTER YOUR YEAR: ");
    scanf("%d", &year);

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d YOUR YEAR IS A LEAP YEAR :)\n", year);
    }
    else {
        printf("%d YOUR YEAR IS NOT A LEAP YEAR :(\n", year);
    }

    return 0;
}
