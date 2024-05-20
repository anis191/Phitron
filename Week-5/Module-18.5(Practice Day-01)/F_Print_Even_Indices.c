#include<stdio.h>
void func(int *a,int n,int i){
    if(i < 0) return;
    if(i != 0){
        if(i % 2 == 0){
            printf("%d ",a[i]);
        }
    }else{
        printf("%d",a[i]);
    }
        func(a,n,i-1);
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    func(a,n,n-1);
}