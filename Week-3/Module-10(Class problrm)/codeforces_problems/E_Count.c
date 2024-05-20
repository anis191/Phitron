#include<stdio.h>
#include<string.h>
int main(){
    char S[1000001];
    int temp = 0,sum=0;
    fgets(S,1000001,stdin);
    int s = strlen(S);
    for(int i=0; i<s; i++){
        temp = S[i] - '0';
        sum += temp;
    }
    printf("%d",sum);
    return 0;
}