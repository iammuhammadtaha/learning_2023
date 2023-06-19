#include <stdio.h>
int main() {
    float operand1, operand2;
    char op;
    float result;
    printf("Enter Operand 1: ");
    scanf("%f", &operand1);
    printf("Enter operator: ");
    scanf(" %c", &op);
    printf("Enter Operand 2: ");
    scanf("%f", &operand2);
    switch (op) {
        case '+':
            result = operand1 + operand2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = operand1 - operand2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = operand1 * operand2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (operand2 != 0) {
                result = operand1 / operand2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }
    return 0;
}
