#include<stdio.h>
int main()
{
    
    int ID;
    char Grade;
    float CGPA;

    printf("Enter your ID:");
    scanf("%d", &ID);


    printf("Enter Your Grade:");
    scanf(" %c", &Grade); //Space before %c - skips any whitespace before reading the character

     
    printf("Enter your Cgpa:");
    scanf("%f", &CGPA);

    //----------OUTPUT--------
printf("--------OUTPUT:\n");

printf("ID: %d\n", ID);
printf("Grade: %c\n", Grade);
printf("CGPA: %.2f\n", CGPA);

return 0;

}