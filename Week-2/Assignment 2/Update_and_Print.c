#include<stdio.h>
int main(){
    int N,X,V;
    scanf("%d",&N);
    if(N >= 1 && N <= 100000){
        int A[N];
        for(int i=0; i<N; i++){
            scanf("%d",&A[i]);
        }
        scanf("%d",&X);
        if(X >= 0 && X < N){
            scanf("%d",&V);
            if(V >= 1 && V <= 100){
                for(int i=0; i<N; i++){
                    if(i == X){
                        A[i] = V;
                    }
                }
                for(int i=N-1; i>=0; i--){
                    printf("%d ",A[i]);
                }
            }
        }
    }
    return 0;
}