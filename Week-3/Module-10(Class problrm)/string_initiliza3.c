#include<stdio.h>
int main(){
    // Get string input from user with space:
    // Useing  1.gets();  2.fgets();

    // 1.gets():-
    char a[30];
    gets(a);
    printf("%s",a);

    // 2.fgets():-
    char b[20];
    fgets(b,7,stdin);
    printf("%s",b);
}