#include<stdio.h>
int main(){
    int N,position_Max=0,position_Min=0;
    scanf("%d",&N);
    if(N >= 2 && N <= 1000){
        int A[N];
        for(int i=0; i<N; i++){
            scanf("%d",&A[i]);
        }
        // Max:-
        int max = A[0];
        for(int i=1; i<N; i++){
            if(max >= A[i]){
                continue;
            }else{
                max = A[i];
                position_Max = i;
            }
        }
        // Min:-
        int min = A[0];
        for(int i=1; i<N; i++){
            if(min <= A[i]){
                continue;
            }else{
                min = A[i];
                position_Min = i;
            }
        }
        int Mx;
        Mx = A[position_Max];
        A[position_Max] = A[position_Min];
        A[position_Min] = Mx;
        for(int i=0; i<N; i++){
            printf("%d ",A[i]);
        }
    }
    return 0;
}