#include<stdio.h>
void print(int n){
    for(int i=1; i<=n; i++){
        if(i == n){
            printf("%d",i);
            break;
        }
        printf("%d ",i);
    }
    return;
}
int main(){
    int n;
    scanf("%d",&n);
    print(n);
    return 0;
}