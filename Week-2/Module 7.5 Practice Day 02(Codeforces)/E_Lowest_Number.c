#include<stdio.h>
int main(){
    /*First line contains a number N (2 ≤ N ≤ 1000) number of elements.*/
    int N,min,c=0;
    scanf("%d",&N);
    if(N >= 2 && N <= 1000){
        int A[N];
        for(int i=0; i<N; i++){
            scanf("%d",&A[i]);
        }
        min = A[0];
        for(int i=0; i<N; i++){
            if(min <= A[i]){
                continue;
            }else{
                min = A[i];
                c = i;
            }
        }
        printf("%d %d",min,c+1);
    }
    return 0;
}