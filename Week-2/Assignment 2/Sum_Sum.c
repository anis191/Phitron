#include<stdio.h>
int main(){
    int N,P_sum=0,N_sum=0;
    scanf("%d",&N);
    if(N >= 1 && N <= 100000){
        int V[N];
        for(int i=0; i<N; i++){
            scanf("%d",&V[i]);
        }
        for(int i=0; i<N; i++){
            if(V[i] > 0){
                P_sum += V[i];
            }else{
                N_sum += V[i];
            }
        }
        printf("%d %d",P_sum,N_sum);
    }
    return 0;
}