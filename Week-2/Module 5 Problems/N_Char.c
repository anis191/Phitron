#include <stdio.h>
 
int main() {
    char ch;
    scanf("%c",&ch);
    if(ch >= 97 && ch <= 122){
        ch = ch - 32;
        printf("%c",ch);
    }else{
        ch = ch + 32;
        printf("%c",ch);
    }
    return 0;
}