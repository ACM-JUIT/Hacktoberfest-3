#include<stdio.h>
void main()
{
    int i,j,n;
    printf("enter a number :");
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
     for(i=1;i<=n;i++)
     { if(i<=j)
         printf("* ");
       else
         printf(" ");
     }
     printf("\n");
    }
    return 0;
}
