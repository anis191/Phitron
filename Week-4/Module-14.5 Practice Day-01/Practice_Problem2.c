/*
*********
 *******
  *****
   ***
    *
*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
        int k = (n*2)-1;
    // Loop for lines
    for(int i=1; i<=n; i++){
        // Loop for spaces
        for(int j=1; j<i; j++){
            printf(" ");
        }
        // Loop for stars
        for(int j=1; j<=k; j++){
            printf("*");
        }
        k -= 2;
        printf("\n");
    }
    return 0;
}