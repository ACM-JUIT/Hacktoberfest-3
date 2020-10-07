//THIS PROGRAM CALCULATES SIMPLE INTEREST UPTO TWO DECIMAL PLACES
#include <stdio.h>

int main()
{
    float p, t, r, SI;

    /* Input Principle Amount, Rate of Interest and Time (in years) */
    printf("Enter Principle Amount: ");
    scanf("%f", &p);

    printf("Enter Time(in years): ");
    scanf("%f", &t);

    printf("Enter Rate of Interest: ");
    scanf("%f", &r);

    /* Calculate simple interest */
    SI = (p * t * r) / 100;

    /* Print the resultant value of SI */
    printf("Simple Interest = %.2f", SI);

    return 0;
}
