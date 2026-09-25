#include <stdio.h>

int main() {

    // ========================================
    // 1. Integer division
    // ========================================

    int a = 5;
    int b = 2;

    printf("Integer division: %d\n", a / b);


    // ========================================
    // 2. Integer to float
    // ========================================

    float result = (float)a / b;

    printf("Integer to float: %.2f\n", result);


    // ========================================
    // 3. Float to integer
    // ========================================

    float price = 99.99;

    int converted_price = (int)price;

    printf("Original price: %.2f\n", price);
    printf("Float to integer: %d\n", converted_price);


    // ========================================
    // 4. Integer to double
    // ========================================

    int number = 10;

    double converted_number = (double)number;

    printf("Integer: %d\n", number);
    printf("Integer to double: %.2lf\n", converted_number);


    // ========================================
    // 5. Character to integer
    // ========================================

    char letter = 'A';

    int ascii_value = (int)letter;

    printf("Character: %c\n", letter);
    printf("ASCII value: %d\n", ascii_value);


    return 0;
}