#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sys/stat.h>

void unit_converter();
void password_generator();
void file_info();
void calculator();

int main() {
    int choice;
    while (1) {
        printf("\n=== Multi-Tool CLI Utility ===\n");
        printf("1. Unit Converter\n");
        printf("2. Password Generator\n");
        printf("3. File Information Checker\n");
        printf("4. Calculator\n");
        printf("5. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: unit_converter(); break;
            case 2: password_generator(); break;
            case 3: file_info(); break;
            case 4: calculator(); break;
            case 5: exit(0);
            default: printf("Invalid choice.\n");
        }
    }
}

// Unit Converter
void unit_converter() {
    int type;
    double value;
    printf("\n--- Unit Converter ---\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Meters to Feet\n");
    printf("3. Kilograms to Pounds\n");
    printf("Choose conversion: ");
    scanf("%d", &type);
    printf("Enter value: ");
    scanf("%lf", &value);

    switch (type) {
        case 1: printf("Result: %.2lf °F\n", (value * 9 / 5) + 32); break;
        case 2: printf("Result: %.2lf ft\n", value * 3.28084); break;
        case 3: printf("Result: %.2lf lbs\n", value * 2.20462); break;
        default: printf("Invalid conversion.\n");
    }
}

// Password Generator
void password_generator() {
    int length;
    printf("\nEnter password length: ");
    scanf("%d", &length);

    char chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*";
    int charSize = strlen(chars);

    srand(time(NULL));
    printf("Generated Password: ");
    for (int i = 0; i < length; i++) {
        printf("%c", chars[rand() % charSize]);
    }
    printf("\n");
}

// File Information Checker
void file_info() {
    char filename[256];
    struct stat fileStat;

    printf("\nEnter file path: ");
    scanf("%s", filename);

    if (stat(filename, &fileStat) == 0) {
        printf("File Size: %ld bytes\n", fileStat.st_size);
        printf("Last Modified: %ld\n", fileStat.st_mtime);
    } else {
        printf("Error: File not found.\n");
    }
}

// Calculator
void calculator() {
    double a, b;
    char op;
    printf("\nEnter expression (e.g. 5 + 3): ");
    scanf("%lf %c %lf", &a, &op, &b);

    switch (op) {
        case '+': printf("Result: %.2lf\n", a + b); break;
        case '-': printf("Result: %.2lf\n", a - b); break;
        case '*': printf("Result: %.2lf\n", a * b); break;
        case '/': 
            if (b != 0) printf("Result: %.2lf\n", a / b); 
            else printf("Error: Division by zero.\n");
            break;
        default: printf("Invalid operator.\n");
    }
}
