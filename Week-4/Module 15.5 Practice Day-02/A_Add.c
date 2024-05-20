#include<stdio.h>
int summation(int x,int y){
    int sum = x + y;
    return sum;
}
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int sum = summation(x,y);
    printf("%d",sum);
    return 0;
}