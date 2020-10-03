#include<stdio.h>
int main()
{  int a , b , c ;
  printf("enter a , b and c values");
  scanf("%d",&a);
  scanf(%d",&b);
  scanf("%d",&c);
 if(a>b && a>c)
 printf("largest number is %d",a);
 else if(b>c && b>a)
 printf("largest number is %d",b);
 else
 printf("largest number is %d",c);
return 0;
}
