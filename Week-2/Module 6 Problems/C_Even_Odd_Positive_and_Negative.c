#include<stdio.h>
int main(){
    int N,a,e=0,o=0,p=0,n=0;
    scanf("%d",&N);
    if(N >= 1 && N <= 1000){
        for(int i=1; i<=N; i++){
            scanf("%d",&a);
            if(a % 2 == 0){
                e++;
            }else{
                o++;
            }
            if(a > 0){
                p++;
            }if(a < 0){
                n++;
            }
        }
        printf("Even: %d\n",e);
        printf("Odd: %d\n",o);
        printf("Positive: %d\n",p);
        printf("Negative: %d\n",n);
    }else{
        printf("Wrong!");
    }
    return 0;
}