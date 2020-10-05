//use of significant fig.
#include <stdio.h>

int main() 
{

    /* Enter your code here.*/
    long  bs;
    scanf("%ld", &bs);
    double gs, hra, da;
    hra= 0.2*bs;
    da= 0.4*bs;
    gs= bs+da+hra;
    printf("%lg", gs);
    //%lg- for signif fig
    return 0;
}