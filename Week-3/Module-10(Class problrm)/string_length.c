#include<stdio.h>
#include<string.h>
int main(){
    // Find String length useing loop:-
    int c=0;
    char a[50];
    gets(a);
    printf("%d\n",sizeof(a));
    int i=0;
    while(a[i] != '\0'){
        c++;
        i++;
    }
    printf("%d\n",c);

    // Useing "Strlen();" with it's library "#include<string.h>"
    int l = strlen(a);
    printf("%d",l);
}