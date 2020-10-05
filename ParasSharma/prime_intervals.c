#include<stdio.h>
int main(){
        int a,b,c;
        scanf("%d",&c);
        scanf("%d",&b);
        for(int d=c;d<=b;d++){
                for(a=2;a<d;a++){
                    if(d%a==0){
                        break;
                    }
                    else if(a==d-1){
                            printf("%d ",d);
                    }
                }
        }
    return 0;
}
