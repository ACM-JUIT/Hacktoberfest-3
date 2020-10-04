#include <stdio.h>
#include <math.h>
int main(void)
{

    int x = 0;
    int y = 0;
    int z = 0;
    int a = 0;
    float money;
     do
     {
      printf("Change owed:");
      scanf("%f",&money);
     }
     while
      (money < 0);
     int cents = round(money * 100);

  if (cents >=25)

   (x = cents/25);

  if (cents%25>=10)

   (y = cents%25/10);

  if (cents%25%10>=5)

   (z = cents%25%10/5);

  if (cents%25%10%5>=1)

   (a = cents%25%10%5/1);
   {
    printf("You need %i coins of 25 cents,%i coins of 10 cents,%i coins of 5 cents and %i coins of 1 cent\n",x,y,z,a);
    printf("Total Coins needed:%i\n",x+y+z+a);
   }

}