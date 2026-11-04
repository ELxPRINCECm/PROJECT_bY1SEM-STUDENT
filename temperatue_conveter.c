#include <stdio.h>

int main() {
    float c, f, k;
    int choice;

        printf("--- TEMPERATURE CONVERTER ---\n ");
        printf("                      -CREATED BY PRINCE-\n");
        printf("1. CELSIUS TO KELVIN\n");
        printf("2. CELSIUS TO FAHRENHEIT\n");
        printf("3. KELVIN TO CELSIUS\n");
        printf("4. KELVIN TO FAHRENHEIT\n");
        printf("5. FAHRENHEIT TO CELSIUS\n");
        printf("6. FAHRENHEIT TO KELVIN\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("ENTER TEMPERATURE IN CELSIUS : ");
                scanf("%f", &c);
                k = c + 273.15;
                printf("KELVIN: %.2f\n", k);
                break;
            case 2:
                printf("ENTER TEMPERATURE IN CELSIUS : ");
                scanf("%f", &c);
                f = (c * 9.0 / 5.0) + 32.0;
                printf("FAHRENHEIT: %.2f\n", f);
                break;
            case 3:
                printf("ENTER TEMPERATURE IN KELVIN : ");
                scanf("%f", &k);
                c = k - 273.15;
                printf("CELSIUS: %.2f\n", c);
                break;
            case 4:
                printf("ENTER TEMPERATURE IN KELVIN : ");
                scanf("%f", &k);
                f = ((k - 273.15) * 9.0 / 5.0) + 32.0;
                printf("FAHRENHEIT: %.2f\n", f);
                break;
            case 5:
                printf("ENTER TEMPERATURE IN FAHRENHEIT : ");
                scanf("%f", &f);
                c = (f - 32.0) * 5.0 / 9.0;
                printf("CELSIUS: %.2f\n", c);
                break;
            case 6:
                printf("ENTER TEMPERATURE IN FAHRENHEIT : ");
                scanf("%f", &f);
                k = ((f - 32.0) * 5.0 / 9.0) + 273.15;
                printf("KELVIN: %.2f\n", k);
                break;
            default:
                printf("Invalid choice! Please select between 1 and 6.\n");
        }
    
    return 0;
}
