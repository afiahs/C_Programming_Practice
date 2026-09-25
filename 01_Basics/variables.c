#include <stdio.h>

int main() {

    int age = 20;
    float height = 5.4;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Grade: %c\n", grade);

    // Changing a variable
    age = 21;
    printf("Updated age: %d\n", age);

    //changing a character
    grade = 'F';
    printf("Updated grade: %c\n", grade);

    return 0;
}