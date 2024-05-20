#include<stdio.h>
int main(){
    /*
    Syntax of a 2D array:-
    DataType ArrayName [row][column]; 
    */
    int arr[2][2];
    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[1][0] = 3;
    arr[1][1] = 4;
    printf("%d ",arr[0][0]);
    printf("%d ",arr[0][1]);
    printf("\n");
    printf("%d ",arr[1][0]);
    printf("%d ",arr[1][1]);
}