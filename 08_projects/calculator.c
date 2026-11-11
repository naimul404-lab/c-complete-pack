#include <stdio.h>

int main(void) {
    double num1, num2;
    char op;
    double result;

    printf("Enter number 1: ");
    scanf("%lf", &num1);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter number 2: ");
    scanf("%lf", &num2);

    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("Cannot divide by zero.\n");
                return 1;
            }
            result = num1 / num2;
            break;
        default:
            printf("Invalid operator.\n");
            return 1;
    }

    printf("Result: %.2f\n", result);
    return 0;
}
