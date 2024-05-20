#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    /*First line contains a number N (2 ≤ N ≤ 1000) number of elements.*/
    if(N >= 2 && N <= 1000){
        int A[N];
        for(int i=0; i<N; i++){
            scanf("%d",&A[i]);
        }
        for(int i=0; i<N; i++){
            if(A[i] > 0){
                A[i] = 1;
            }else{
                if(A[i] == 0){
                    A[i] == 0;
                }else{
                    A[i] = 2;
                }
            }
        }
        for(int i=0; i<N; i++){
            printf("%d ",A[i]);
        }
    }
    return 0;
}