/*
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*
*/
#include<stdio.h>
int main(){
    int r;
    scanf("%d",&r);
    // For 1st half:-
    for(int i=1; i<=r; i++){
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    // For 2nd half:-
    int k = r-1;
    for(int i=1; i<=r-1; i++){
        // Inner loop for print star-
        for(int j=1; j<=k; j++){
            printf("*");
        }
        k--;
        printf("\n");
    }
}