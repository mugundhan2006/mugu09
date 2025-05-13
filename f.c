#include <stdio.h>

int main() {
    float num1, num2;
    int choice;
    printf("Select an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1/2/3/4): ");
    scanf("%d", &choice);
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    switch (choice) {
        case 1:
            printf("Result: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("Result: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case 3:
            printf("Result: %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case 4:
            if (num2 != 0) {
                printf("Result: %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice! Please select a valid operation.\n");
    }

    return 0;
}

