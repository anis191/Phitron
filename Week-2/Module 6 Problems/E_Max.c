#include<stdio.h>
int main(){

    int N,a,b=0;
    scanf("%d",&N);
    if(N <= 1 || N <= 1000){

        for(int i=1; i<=N; i++){
            scanf("%d",&a);
            
                if(a > b){
                    b = a;
                }
        }
        printf("%d",b);
    }else{
        printf("Wrong!");
    }
    return 0;
}