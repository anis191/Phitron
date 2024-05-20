#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n>=1 && n<=1000){
        for(int i=1; i<=n; i++){
            if(i % 5 == 0){
                printf("%d Yes\n",i);
            }else{
                printf("%d No\n",i);
            }
        }
    }else{
        printf("Wrong!");
    }
    return 0;
}