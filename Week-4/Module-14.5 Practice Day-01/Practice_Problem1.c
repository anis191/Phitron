/*
    *
   **
  ***
 ****
*****
*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    // Loop for lines
    for(int i=1; i<=n; i++){
        // Loop for spaces
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }
        // Loop for stars
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}