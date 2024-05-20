#include<stdio.h>
#include<string.h>
int main(){
    char s[1001];
    fgets(s,1001,stdin);
    char s2[1001];
    int j = strlen(s)-1;
    for(int i=0; i<strlen(s); i++){
        s2[i] = s[j];
        j--;
    }
    int count=0;
    for(int i=0; i<strlen(s); i++){
        if(s[i] != s2[i]){
            count++;
            break;
        }else{
            continue;
        }
    }
    if(count != 0){
        printf("NO");
    }else{
        printf("YES");
    }
    return 0;
}