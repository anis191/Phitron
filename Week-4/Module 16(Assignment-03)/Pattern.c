#include<stdio.h>
void even(int n,int p){
    for(int i=1; i<=n-1; i++){
        for(int j=1; j<=i; j++){
            printf(" ");
        }
        for(int j=1; j<=p; j++){
            if(i % 2 != 0){
                printf("#");
            }else{
                printf("-");
            }
        }
        p -= 2;
        printf("\n");
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    int k = 1;
    int p = (n*2)-3;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }
        for(int j=1; j<=k; j++){
            if(i % 2 != 0){
                printf("#");
            }else{
                printf("-");
            }
        }
        k += 2;
        printf("\n");
    }
    if(n % 2 != 0){
    for(int i=1; i<=n-1; i++){
        for(int j=1; j<=i; j++){
            printf(" ");
        }
        for(int j=1; j<=p; j++){
            if(i % 2 != 0){
                printf("-");
            }
            else{
                printf("#");
            }
        }
        p -= 2;
        printf("\n");
    }
    }else{
        even(n,p);
    }
    return 0;
}