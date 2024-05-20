#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    if(N >= 1 && N <= 100000){
        int A[N];
        for(int i=0; i<N; i++){
            scanf("%d",&A[i]);
        }
        for(int i=N-1; i>=0; i--){
            if(i % 2 != 0){
                printf("%d ",A[i]);
            }else{
                continue;
            }
        }
    }
    return 0;
}