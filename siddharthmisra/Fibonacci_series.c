#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,i;
    printf("the number to which series to be printed:");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d",c);
    return 0;
}
