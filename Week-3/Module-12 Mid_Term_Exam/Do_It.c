#include<stdio.h>
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    if(n>=1 && n<=100 && k>=1 && k<=100){
        for(int i=1; i<=n; i++){
            for(int i=1; i<=k; i++){
                printf("%d ",i);
            }
            printf("\n");
        }
    }
    return 0;
}