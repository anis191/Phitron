#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    // Negetive value ke positive kore dei
    int x = abs(a);
    int y = abs(b);
    printf("%d %d",x,y);
}