#include<stdio.h>
void fun(int i){
    if(i == 6) return;
    fun(i+1); // recursive call must write before print output
    printf("%d ",i);
    return;
}
int main(){
    fun(1); //input should be pass "1"
    return 0;
}