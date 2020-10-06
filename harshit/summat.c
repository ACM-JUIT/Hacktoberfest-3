#include<stdio.h>
int main()
{
    int a[3][3];
    int b[3][3];
    int c[3][3];
    int i,j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Enter the value of a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Enter the value of b[%d][%d]= ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",a[i][j]+b[i][j]);
            if(j==2)
            {
                printf("\n");
            }
        }
    }
}
