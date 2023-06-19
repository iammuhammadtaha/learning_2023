#include <stdio.h>
char get_grade(int marks) {
    char grade;
    switch (marks) {
        case 90 ... 100:
            grade = 'A';
            break;
        case 75 ... 89:
            grade = 'B';
            break;
        case 60 ... 74:
            grade = 'C';
            break;
        case 50 ... 59:
            grade = 'D';
            break;
        case 36 ... 49:
            grade = 'E';
            break;
        case 0 ... 35:
            grade = 'F';
            break;
        default:
            grade = '\0';
            break;
    }
    return grade;
}
int main() {
    int marks;
    printf("Enter the marks: ");
    scanf("%d", &marks);
    char grade = get_grade(marks);
    printf("Grade ");
    switch (grade) {
        case 'A':
            printf("A\n");
            break;
        case 'B':
            printf("B\n");
            break;
        case 'C':
            printf("C\n");
            break;
        case 'D':
            printf("D\n");
            break;
        case 'E':
            printf("E\n");
            break;
        case 'F':
            printf("F\n");
            break;
        default:
            printf("Invalid marks\n");
            break;
    }
    return 0;
}
