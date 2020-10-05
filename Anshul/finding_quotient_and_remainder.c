#include <stdio.h>
int main()
{
    int divident,divisor, quotient, remainder;

    printf("ENTER DIVIDENT :");
    scanf(" %d",&divident);
    printf("ENTER DIVISOR :");
    scanf(" %d",&divisor);

    quotient= divident / divisor;
    remainder=divident % divisor;

    printf("QUOTIENT IS : %d\n",quotient);
    printf("REMAINDER IS : %d",remainder);
    return 0;
}
