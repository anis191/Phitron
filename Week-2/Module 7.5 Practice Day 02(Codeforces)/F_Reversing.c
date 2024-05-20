#include<stdio.h>
int main(){
    /*First line contains a number N (1 ≤ N ≤ 10^3) number of elements.
    Second line contains N numbers (0 ≤ Ai ≤ 10^9).*/
    int N;
    scanf("%d",&N);
    if(N >= 1 && N <= 1000){
        int A[N];
        for(int i=0; i<N; i++){
            scanf("%d",&A[i]);
        }
        for(int i=N-1; i>=0; i--){
            printf("%d ",A[i]);
        }
    }
    return 0;
}