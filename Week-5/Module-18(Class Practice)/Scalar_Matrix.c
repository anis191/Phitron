#include<stdio.h>
int main(){
    int r,c,value;
    scanf("%d %d",&r,&c);
    if(r == c){
    int arr[r][c];
    printf("Enter a value for Scalar Matrix:\n");
    scanf("%d",&value);
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(i == j){
                arr[i][j] = value;
            }else{
                arr[i][j] = 0;
            }
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    }else{
        printf("Enter row and column same");
    }
}