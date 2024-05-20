#include<stdio.h>
int main(){
    int N;
    int count = 0;  //N (1 ≤ N ≤ 10^3)
    scanf("%d",&N);
    if(N >= 1 && N <= 1000){
        for(int i=1; i<=N; i++){
            if(i % 2 == 0){
                printf("%d\n",i);
                count++;
            }else{
                continue;
            }
        }
        if(count == 0){
            printf("%d",-1);
        }
    }else{
        printf("Wrong!");
    }
    return 0;
}