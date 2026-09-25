#include<stdio.h>
int main()
{
    int a=20;
    char b= 'A';
    float c=2.5, e=3.888;
    long d=2098128370;

    printf("Integer type: %d\n", a);
    printf("Character type: %c\n", b);
    printf("Decimal/Floating number: %f %.2f %f\n",c, e, e); //difference of using %f , %.2f
    printf("Long number type: %ld\n", d);

return 0;
}