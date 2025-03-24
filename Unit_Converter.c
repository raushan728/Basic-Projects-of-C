#include <stdio.h>

int main() {
    int choice;
    float value, convertedValue;
    char repeat;

    do {
        printf("\nWelcome to Unit Converter!\n");
        printf("Select a conversion type:\n");
        printf("1. Kilometers to Meters\n");
        printf("2. Meters to Kilometers\n");
        printf("3. Kilograms to Grams\n");
        printf("4. Grams to Kilograms\n");
        printf("5. Celsius to Fahrenheit\n");
        printf("6. Fahrenheit to Celsius\n");
        printf("7. Exit\n");
        
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 7) {
            break; // Exit the loop
        }

        printf("Enter value: ");
        scanf("%f", &value);

        switch (choice) {
            case 1:
                convertedValue = value * 1000;
                printf("%.2f Kilometers = %.2f Meters\n", value, convertedValue);
                break;
            case 2:
                convertedValue = value / 1000;
                printf("%.2f Meters = %.2f Kilometers\n", value, convertedValue);
                break;
            case 3:
                convertedValue = value * 1000;
                printf("%.2f Kilograms = %.2f Grams\n", value, convertedValue);
                break;
            case 4:
                convertedValue = value / 1000;
                printf("%.2f Grams = %.2f Kilograms\n", value, convertedValue);
                break;
            case 5:
                convertedValue = (value * 9/5) + 32;
                printf("%.2f Celsius = %.2f Fahrenheit\n", value, convertedValue);
                break;
            case 6:
                convertedValue = (value - 32) * 5/9;
                printf("%.2f Fahrenheit = %.2f Celsius\n", value, convertedValue);
                break;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }

        printf("\nDo you want to convert again? (Press 'y' to continue, any other key to exit): ");
        scanf(" %c", &repeat);

    } while (repeat == 'y' || repeat == 'Y');

    printf("Thank you for using Unit Converter!\n");
    return 0;
}
