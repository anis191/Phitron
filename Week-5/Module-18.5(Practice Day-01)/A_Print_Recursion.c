#include<stdio.h>
void anis(int n,int i){
    if(i == n+1) return;
    printf("I love Recursion\n");
    anis(n,i+1);
}
int main(){
    int n;
    scanf("%d",&n);
    anis(n,1);
    return 0;
}