#include<stdio.h>
long long int func(int *a, int n, long long int sum, int i){
    if(i == n) return sum;
    sum += a[i];
    func(a,n,sum,i+1);
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    long long int sum = func(a,n,0,0);
    printf("%lld",sum);
    return 0;
}