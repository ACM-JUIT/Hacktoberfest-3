#include <stdio.h>

int main()
{
    char health, city, sex;
    double policy;
    int age;
    printf ("\nEnter health: ");
    scanf ("%c", &health);
    printf ("\nEnter age: ");
    scanf ("%d", &age);
    printf ("\nEnter Residence: ");
    scanf (" %c", &city);
    printf ("\nEnter sex: ");
    scanf (" %c", &sex);
    printf ("\n Enter policy amount: ");
    scanf ("%lf", &policy);

    if (health == 'E' && age >= 25 && age <= 35 && city == 'C')
    {
        if (sex == 'M')
        {
            if (policy < 200000)
            {
                printf("\npremium is: %lf", (policy / 1000) * 4);
            }
            else
            {
                printf("Policy amount exceed the limit.");
            }
        }
        else if (sex == 'F')
        {
            if (policy < 10000)
            {
                printf("\npremium is: %lf", (policy / 1000) * 3);
            }
            else
            {
                printf("Policy amount exceed the limit.");
            }
        }
        else
        {
            printf("You can not be insured.");
        }
    }
    else if (health == 'P' && age >= 25 && age <= 35 && city == 'V')
    {
        if (sex == 'M')
        {
            if (policy < 10000)
            {
                printf("%lf", (policy / 1000) * 6);
            }
            else
            {
                printf("Policy amount exceed the limit.");
            }
        }
        else
        {
            printf("You can not be insured.");
        }
    }
    else if ((health == 'E' || health == 'P') && (city == 'V' || city == 'C') && (sex == 'M' || sex == 'F'))
    {
        printf("You can not be insured.");
    }
    else
    {
        printf("Input unspecified.");
    }

    return 0;
}
