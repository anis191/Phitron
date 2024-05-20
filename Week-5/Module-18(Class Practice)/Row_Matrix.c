#include<stdio.h>
int main(){
    int col;
    scanf("%d",&col);
    int arr[1][col]; //Row fixed
    for(int j=0; j<col; j++){ // Loop just for column
        scanf("%d",&arr[0][j]);
    }
    for(int j=0; j<col; j++){ //Loop just for column
        printf("%d ",arr[0][j]);
    }
    return 0;
}