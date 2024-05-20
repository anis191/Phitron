#include<stdio.h>
#include<string.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    if(n >= 1 && n <= 1000000){
        char a[1000001];
        scanf("%s",a);
        for(int i=0; i<strlen(a); i++){
            sum += a[i] - '0';
        }
        printf("%d",sum);
    }
    return 0;
}