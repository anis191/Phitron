#include<stdio.h>
#include<string.h>
int is_palindrome(char s[], int l){
    char c[l+1];
    int i=0;
    for(int j=l-1; j>=0; j--){
        c[i] = s[j];
        i++;
    }
    c[l] = '\0';
    int x = strcmp(c,s);
    if(x == 0){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    char s[1000];
    scanf("%s",s);
    int l = strlen(s);
    int x = is_palindrome(s,l);
    if(x == 1){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
    return 0;
}