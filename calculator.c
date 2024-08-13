#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Displaying options to the user
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    // Taking input for the two operands
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    // Performing the calculation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Error! Operator is not correct\n");
            break;
    }

    return 0;
}
