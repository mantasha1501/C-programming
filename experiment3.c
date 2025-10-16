#include <stdio.h>

/* mantasha Shaikh
   Uin: 251P065
   Comps Div: C */

int main() {
    int choice;
    float num1, num2, result;

    start:  // Label for goto

    printf("\n===== Calculator Menu =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter your choice (1–5): ");
    scanf("%d", &choice);

    if (choice == 5) {
        printf("Exiting the calculator. Goodbye!\n");
        return 0;
    }

    if (choice < 1 || choice > 5) {
        printf("Invalid choice! Please select between 1 and 5.\n");
        goto start;
    }

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;
        case 4:
            if (num2 == 0)
                printf("Error! Division by zero is not allowed.\n");
            else {
                result = num1 / num2;
                printf("Result = %.2f\n", result);
            }
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    goto start;
}
