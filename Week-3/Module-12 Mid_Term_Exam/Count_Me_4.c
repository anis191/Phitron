#include<stdio.h>
#include<string.h>
int main(){
    char s[10001];
    scanf("%s",s);
    int c[26]={0};
    for(int i=0; i<strlen(s); i++){
        c[s[i] - 97]++;
    }
    for(int i=0; i<26; i++){
        if(c[i] != 0){
            printf("%c - %d\n",i+97,c[i]);
        }
    }
    return 0;
}