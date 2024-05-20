#include<stdio.h>
int main(){
    int n,k=1;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=n-1; j>=i; j--){
            printf(" ");
        }
        for(int j=1; j<=k; j++){
            printf("*");
        }
        k += 2;
        printf("\n");
    }
}