#include<stdio.h>
#include<string.h>
int main(){
    char S[1000];
    char T[1000];
    gets(S);
    gets(T);
    int s = strlen(S);
    int t = strlen(T);
    printf("%d %d\n",s,t);
    printf("%s %s",S,T);
}