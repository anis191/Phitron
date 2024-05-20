#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int p = ((n-1)/2)+6;
    int k = 1;
    for(int i=1; i<=p; i++){
        for(int j=1; j<=p-i; j++){
            printf(" ");
        }
        for(int j=1; j<=k; j++){
            printf("*");
            k = (2*i)-1;
        }
        printf("\n");
    }
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            printf(" ");
        }
        for(int j=1; j<=n; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}