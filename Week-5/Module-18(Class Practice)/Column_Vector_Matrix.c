#include<stdio.h>
int main(){
    int row;
    scanf("%d",&row);
    int arr[row][1]; //Row fixed
    for(int i=0; i<row; i++){ // Loop just for row
        scanf("%d",&arr[i][0]);
    }
    for(int i=0; i<row; i++){ //Loop just for row
        printf("%d ",arr[i][0]);
        printf("\n");
    }
    return 0;
}