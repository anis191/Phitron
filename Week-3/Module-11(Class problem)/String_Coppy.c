#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    char b[100];
    scanf("%s %s",a,b);
    for(int i=0; i<=strlen(b); i++){
        a[i] = b[i];
    }
    printf("%s %s",a,b);
}
// eai same kaj ti ekta build in function "strcpy();"" dia kora jai.