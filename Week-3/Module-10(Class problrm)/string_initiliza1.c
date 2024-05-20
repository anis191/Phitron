#include<stdio.h>
int main(){
    // single character waise(single quatation):
    char a[5]={'a','b','c','d','e'};
    for(int i=0; i<5; i++){
        printf("%c ",a[i]);
    }
    printf("\n");
    // Assing without coma,like a word(with double quatation):
    char b[6]="Anisul";
    for(int i=0; i<6; i++){
        printf("%c",b[i]);
    }
}