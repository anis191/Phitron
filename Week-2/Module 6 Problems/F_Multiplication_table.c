#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    if(N >= 1 && N <= 50){
        for(int i=1; i<=12; i++){
            printf("%d * %d = %d\n",N,i,N*i);
        }
    }else{
        printf("Wrong");
    }
    return 0;
}