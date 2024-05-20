#include<stdio.h>
#include<string.h>
int main(){
    char s[100001];
    gets(s);
    int l = strlen(s);
    for(int i=0; i<l; i++){
        if(s[i] == ','){
            s[i] = ' ';
        }else if(s[i] >= 65 && s[i] <= 90){
            s[i] += 32;
        }else{
            s[i] -= 32;
        }
    }
    printf("%s",s);
    return 0;
}