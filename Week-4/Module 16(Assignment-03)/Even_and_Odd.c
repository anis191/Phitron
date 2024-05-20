#include<stdio.h>
void odd_even(void){
    int n,e=0,o=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++){
        if(a[i] % 2 == 0){
            e++;
        }else{
            o++;
        }
    }
    printf("%d %d",e,o);
    return;
}
int main(){
    odd_even();
    return 0;
}