#include <stdio.h>
int bit_operations(int num, int oper_type) {
    switch (oper_type) {
        case 1:
            num |= (1 << 0);  // Set 1st bit
            break;
        case 2:
            num &= ~(1 << 31);  // Clear 31st bit
            break;
        case 3:
            num ^= (1 << 15);  // Toggle 16th bit
            break;
        default:
            printf("Invalid operation type.\n");
            break;
    }
    return num;
}
int main() {
    int number, operationType;
    printf("Enter a 32-bit integer: ");
    scanf("%d", &number);
    printf("Enter the operation type (1 for setting 1st bit, 2 for clearing 31st bit, 3 for toggling 16th bit): ");
    scanf("%d", &operationType);
    int result = bit_operations(number, operationType);
    printf("Result: %d\n", result);
    return 0;
}
