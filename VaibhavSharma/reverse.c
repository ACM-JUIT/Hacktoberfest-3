#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d", &a);
    while(a!=0){
        printf("%d",a%10);
        a = a/10;
    }
    return 0;
}
