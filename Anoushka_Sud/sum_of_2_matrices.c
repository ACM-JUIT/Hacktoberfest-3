#include<stdio.h>
int main()
{
    int n,m;
    printf("the number of rows and columns in matrix-1 ");
    scanf("%d%d",&n,&m);
    int a[n][m];
    int i,j;
    printf("enter the value in the rows");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    }
    printf("the number of rows and columns in matrix-2 ");
    scanf("%d%d",&n,&m);
    int b[n][m];
    printf("enter the value in the rows");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
           {
            scanf("%d",&b[i][j]);}
            }
    int c[n][m];
    printf("sum = \n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
    c[i][j]=a[i][j]+b[i][j];
    printf("%d ",c[i][j]);
    }
    printf("\n");
    }
    return 0;
}
