/*
    *
   **
  ***
 ****
*****
*/
#include<stdio.h>
int main(){
    int r;
    scanf("%d",&r);
    for(int i=1; i<=r; i++){
        // Loop for spaces:-
        for(int j=1; j<=r-i; j++){
            printf(" ");
        }
        // Loop for stars:-
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}