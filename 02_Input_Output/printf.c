#include<stdio.h>
int main()
{
    printf("This is how we print, using the printf command for C. Then adding first brackets and keeping the content that needs to be print within the double comma.\n\t");

int a=5;
    printf("Integer printing: %d\n", a);

float b=3.768;
double c=82765257.50;

    printf("Float printing: %.2f\t", b); //\t creates plenty of space like tab does.
    printf("Doulbe Printing: %lf\n", c); //\n creates a new line, like jumps into the new line.

char grade= 'A';
    printf("Character printing: %c\n", grade);


return 0;
}