#include <stdio.h>
int main() {
    int i, n, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    int sum=0;
    for (i = 1; i <= n-1; ++i) 
    {   sum+=t1;
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    if(n==1)
    printf("0");
    else 
    printf("The Sum till the first %d numbers of the series is : %d",n,sum);
    return 0;
}
