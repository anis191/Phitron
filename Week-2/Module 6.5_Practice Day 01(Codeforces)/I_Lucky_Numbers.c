#include<stdio.h>
int main(){
    int n,a,b;
    scanf("%d",&n);
    if(n >=10 && n <= 99){
        a = n % 10;
        n = n / 10;
        b = n % 10;
        if(a % b == 0 || b % a == 0){
            printf("YES");
        }else{
            printf("NO");
        }
    }
    return 0;
}