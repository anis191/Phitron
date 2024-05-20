#include<stdio.h>
void func(int i){
    if (i == 0) return;
    if(i != 1){
    printf("%d ",i);
    }else{
    printf("%d",i);
    }
    func(i-1);
}
int main(){
    int n;
    scanf("%d",&n);
    func(n);
    return 0;
}