#include <stdio.h>

int main()
{
    int num_year;

    printf("Enter the year you want to check for:\n");
    scanf("%d", &num_year);
    
    // using if-else statements and putting up the necessary conditions.
    
    if ((num_year % 4 == 0 && num_year % 100 != 0) || (num_year % 400 == 0))
    {
        printf("Its a Leap Year!!\n");
    }
    else
    {
        printf("Its not a Leap Year!!\n");
    }

    return 0;
}
