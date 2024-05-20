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
    for(int i=n; i>=1; i--){
        for(int j=i; j<n; j++){
            printf(" ");
        }
        for(int j=1; j<=(i*2)-1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}