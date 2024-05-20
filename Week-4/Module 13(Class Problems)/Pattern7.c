/*
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/
#include<stdio.h>
int main(){
    int r;
    scanf("%d",&r);
    // Outer Loop for lines:
    int space = r-1;
    for(int i=1; i<=r; i++){
        //Inner loop for space:
        for(int j=1; j<=space;j++){
            printf("  ");
        }
        space--;
        // Inner loop for stars:
        for(int j=1; j<=i; j++){
            printf("* ");
        }
        // Inner loop for 2nd part stars:
        for(int j=1; j<i; j++){
            printf("* ");
        }
        printf("\n");
    }
    // Outer loop for 2nd part lines:
    int stars = r-1;
    int star = r-2;
    for(int i=1; i<r; i++){
        // Inner loop for 2nd_1st part space:
        for(int j=1; j<=i; j++){
            printf("  ");
        }
        // Inner loop for 2nd_1st part stars:

        for(int j=1; j<=stars; j++){
            printf("* ");
        }
        stars--;
        // Inner loop for 2nd_2nd part stars:
        for(int j=1; j<=star; j++){
            printf("* ");
        }
        star--;
        printf("\n");
    }
}