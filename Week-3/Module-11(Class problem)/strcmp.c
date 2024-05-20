#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    char b[100];
    scanf("%s %s",a,b);
    int i = strcmp(a,b);
    if(i == 0){
        printf("They are same");
    }else if(i > 0){
        printf("b- %s: is small",b);
    }else{
        printf("a- %s: is small",a);
    }
    return 0;
}