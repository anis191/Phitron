#include<stdio.h>
int main(){
    int N,X,c=0;;
    scanf("%d",&N);
    if(N >=1 && N <= 100000){
        int A[N];
        for(int i=0; i<N; i++){
            scanf("%d",&A[i]);
        }
        scanf("%d",&X);
        for(int i=0; i<N; i++){
            if(A[i] == X){
                printf("%d",i);
                c++;
                break;
            }
        }
        if(c == 0){
            printf("-1");
        }
    }
    return 0;   
}