/*This prgram is written to print a slanting line of number entered by the user*/
#include<stdio.h>
int main()
{
    int i,j,k,a,l,n;
    scanf("%d",&a);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i+1;j++)
            {
                printf("  ");

            }
        for(k=1;k<=1;k++)
            {
                printf("%d",a);
            }
        for(l=1;l<=1;l++);
            {
                printf(" ");
            }

        printf("\n");
    }
}
