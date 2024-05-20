#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1; i<=t; i++){
    long long int m,d;
    int a,b,c;
    scanf("%lld %d %d %d",&m,&a,&b,&c);
    long long int x = a*b*c;
    d = m / x;
    if(m == 0){
        printf("0");
    }else if(m % x == 0){
        printf("%lld",d);
    }else{
        printf("-1");
    }
    printf("\n");
    }
    return 0;
}