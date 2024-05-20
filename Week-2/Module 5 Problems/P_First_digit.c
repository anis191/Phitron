#include <stdio.h>
 
int main() {
    int x,r,t,l;
    scanf("%d",&x);
    if(x > 999 && x <= 9999){
        t = x;
        while(t != 0){
            r = t % 10;
            t = t / 10;
            l = r;
        }
        //printf("%d",l);
        if(l % 2 == 0){
            printf("EVEN");
        }else{
            printf("ODD");
        }
    }else{
        printf("Wrong!");
    }
    return 0;
}
