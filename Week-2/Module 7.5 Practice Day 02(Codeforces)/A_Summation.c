#include<stdio.h>
int main(){
    //N (1 ≤ N ≤ 10^5)
    int N;
    long long int sum=0;
    scanf("%d",&N);
    if(N >= 1 && N <= 100000){
        int A[N];
        for(int i=0; i<N; i++){
            scanf("%d",&A[i]);
        }
        for(int i=0; i<N; i++){
                sum += A[i];
        }
        if(sum < 0){
            sum *= -1;
        }
        printf("%lld",sum);
    }
    return 0;
}