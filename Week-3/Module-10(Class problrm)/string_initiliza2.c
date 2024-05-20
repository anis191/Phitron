#include<stdio.h>
int main(){
    // get string input from user, useing loop:(normal way):
    int n;
    scanf("%d",&n);
    char a[n];
    for(int i=0; i<n; i++){
        scanf("%c",&a[i]);
    }
    for(int i=0; i<n; i++){
        printf("%c ",a[i]);
    }
    
    // Useing "%S" :
    char b[5];
    scanf("%s",b);
    printf("%s",b);
}