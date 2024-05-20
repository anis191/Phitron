#include<stdio.h>
int main(){
    char X;
    scanf("%c",&X);
    if(X >= 48 && X <= 57){
        printf("IS DIGIT");
    }else{
        if(X >= 65 && X <= 90){
            printf("ALPHA\nIS CAPITAL");
        }else{
            printf("ALPHA\nIS SMALL");
        }
    }
    return 0;
}