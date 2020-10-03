/* This program is written to take a number as input from the user and check if it is a palindrome number or not.
   Written by Ansh Agrawal
   Date 25/09/2020
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int num,num1,digits=0,rev_num=0,dig,num2;
    scanf("%d", &num);
    num1=num;
    num2=num;
    while(num1!=0)
    {
        digits++;
        num1=num1/10;
    }
    while(num!=0)
    {
       dig=num%10;
       rev_num=rev_num+(dig*(pow(10, (digits-1))));
       digits--;
       num=num/10;
    }
    if(num2==rev_num)
    printf("YES");
    else 
    printf("NO");
    return 0;
}