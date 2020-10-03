#include<stdio.h>
int main(){
        int a,b,k,n=5;
        for(a=1;a<=5;a++){
            for(b=1;b<=a;b++){
                printf(" ");
            }
            for(k=n;k>0;k--){
                printf("* ");
            }
            n-=1;
        printf("\n");
        }
    return 0;
}
