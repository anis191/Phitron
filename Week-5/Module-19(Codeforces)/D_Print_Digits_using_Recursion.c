#include<stdio.h>
void digit(int n){
    if(n == 0) return;
    int r = n % 10;
    n = n / 10;
    digit(n);
    printf("%d ",r);
}
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
    int n;
    scanf("%d",&n);
    digit(n);
    if(n ==0){
        printf("0");
    }
    printf("\n");
    }
}