#include <stdio.h>

int main() {
    char operator;
    double firstNumber, secondNumber;

    // Ask the user to enter an operator
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    // Ask the user to enter two operands
    printf("Enter two operands: ");
    scanf("%lf %lf", &firstNumber, &secondNumber);

    // Switch case to perform the chosen operation
    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", firstNumber, secondNumber, firstNumber + secondNumber);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", firstNumber, secondNumber, firstNumber - secondNumber);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", firstNumber, secondNumber, firstNumber * secondNumber);
            break;
        case '/':
            if (secondNumber != 0.0) {
                printf("%.2lf / %.2lf = %.2lf\n", firstNumber, secondNumber, firstNumber / secondNumber);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error! Operator is not correct.\n");
            break;
    }

    return 0;
}
