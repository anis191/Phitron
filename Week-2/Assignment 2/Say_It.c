#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    if(N >= 1 && N <= 100000){
        for(int i=1; i<=N; i++){
            printf("%d. I Want More Assignments\n",i);
        }
    }
    return 0;
}