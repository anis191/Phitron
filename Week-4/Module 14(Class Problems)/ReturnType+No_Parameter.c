// No parameter
int sum(){
    int a,b;
    scanf("%d %d",&a,&b);
    int s = a + b;
    return s;
}
#include<stdio.h>
int main(){
    int s = sum();
    printf("%d",s);
}