#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    char b[100];
    scanf("%s %s",a,b);
    strcpy(a,b);
    printf("%s %s",a,b);
}