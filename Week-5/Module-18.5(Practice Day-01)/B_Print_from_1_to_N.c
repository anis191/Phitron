#include<stdio.h>
void func(int n,int i){
    if (i == n+1) return;
    printf("%d\n",i);
    func(n,i+1);
}
int main(){
    int n;
    scanf("%d",&n);
    func(n,1);
    return 0;
}