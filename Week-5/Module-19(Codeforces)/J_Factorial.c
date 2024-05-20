#include<stdio.h>
long long int factorial(int i, long long int mul){
    if(i == 0) return mul;
    mul *= i;
    factorial(i-1,mul);
}
int main(){
    int n;
    scanf("%d",&n);
    long long int fact = factorial(n,1);
    printf("%lld",fact);
    return 0;
}