#include<stdio.h>
int main(){
    int r,c,value;
    scanf("%d %d",&r,&c);
    if(r == c){
        int arr[r][c];
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(i == j){
                    arr[i][j] = 1;
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
        printf("Enter row column same");
    }
    return 0;
}