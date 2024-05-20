#include<stdio.h>
int main(){
    /*First line contains a number N (2 ≤ N ≤ 1000) number of elements.*/
    int N;
    scanf("%d",&N);
    if(N >= 2 && N <= 1000){
        int A[N];
        for(int i=0; i<N; i++){
            scanf("%d",&A[i]);
        }
        for(int i=0; i<N; i++){
            if(A[i] <= 10){
                printf("A[%d] = %d\n",i,A[i]);
            }
        }
    }
    return 0;
}