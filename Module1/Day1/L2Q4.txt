#include <stdio.h>
#include <ctype.h>
int get_char_type(char c) {
    if (isupper(c)) {
        return 1;  // Uppercase alphabets
    } else if (islower(c)) {
        return 2;  // Lowercase alphabets
    } else if (isdigit(c)) {
        return 3;  // Digits
    } else if (isgraph(c)) {
        return 4;  // Any other printable symbol
    } else if (!isprint(c)) {
        return 5;  // Non-printable symbols
    } else {
        return 0;  // Invalid character
    }
}
int main() {
    char character;
    printf("Enter a character: ");
    scanf(" %c", &character);
    int result = get_char_type(character);
    switch (result) {
        case 1:
            printf("Type: Uppercase Alphabet\n");
            break;
        case 2:
            printf("Type: Lowercase Alphabet\n");
            break;
        case 3:
            printf("Type: Digit\n");
            break;
        case 4:
            printf("Type: Printable Symbol\n");
            break;
        case 5:
            printf("Type: Non-printable Symbol\n");
            break;
        default:
            printf("Type: Invalid Character\n");
            break;
    }
    return 0;
}
