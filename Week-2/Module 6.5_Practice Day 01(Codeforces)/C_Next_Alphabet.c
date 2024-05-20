#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch >= 97 && ch <122){
        ch = ch + 1;
        printf("%c",ch);
    }
    else if(ch == 122){
        ch = 'a';
        printf("%c",ch);
    }
    else{
        printf("Wrong");
    }
    return 0;
}