#include<stdio.h>
int main(){
    int A,B;
    scanf("%d %d",&A,&B);
    if(A >= 0 && A <= 100 && B >=0 && B <= 100){
        if(A >= B){
            printf("Yes");
        }else{
            printf("No");
        }
    }

    return 0;
}