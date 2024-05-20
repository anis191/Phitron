#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    if(t >= 1 && t <= 100){
        for(int i=1; i<=t; i++){
        char S[101];
        scanf("%s",S);
        int l = strlen(S);
        if(l > 10){
            char first = S[0];
            char last = S[l-1];
            int count = l-2;
        printf("%c%d%c\n",first,count,last);
        }else{
            printf("%s\n",S);
        }
        }
    }
}