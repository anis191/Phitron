#include<stdio.h>
int func(int *a,int n,int max,int i){
    if (i==n-1) return max;
    if(max < a[i]){
        max = a[i];
    }
    func(a,n,max,i+1);
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int max = func(a,n,a[0],0);
    printf("%d",max);
    return 0;
}