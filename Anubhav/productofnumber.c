#include<stdio.h>
int main()
{
    //product of digit of a number entered by user
    int number,reminder,product=1;
    printf("\n Enter the number:");
    scanf("%d",&number);
    while(number!=0)
    {
        reminder=number%10;
        product=product*reminder;
        number=number/10;
    }
    printf("\n Product of digit is:%d ",product);
    return 0;

}
