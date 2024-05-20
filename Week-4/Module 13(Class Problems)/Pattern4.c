/*
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
    for(int i=1; i<=r; i++){
        // Loop for spaces:-
        for(int j=1; j<=i-1; j++){
            printf(" ");
        }
        for(int j=i; j<=r; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}