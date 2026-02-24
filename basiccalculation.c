#include <stdio.h>

int main()
 {
    int choice;
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nChoose Operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter choice (1-4): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Result = %.2d", num1 + num2);
            break;

        case 2:
            printf("Result = %.2d", num1 - num2);
            break;

        case 3:
            printf("Result = %.2d", num1 * num2);
            break;

        case 4:
            if(num2 != 0)
            printf("Result = %.2d", num1 / num2);
            break;

        default:
            printf("Invalid Choice!");
            break;
    }

    return 0;
}