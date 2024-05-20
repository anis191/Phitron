// Create a Primary Diagonal Matrix:
#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    if(r == c){
        int arr[r][c];
        printf("Enter %d values: \n",r);
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(i == j){
                    scanf("%d",&arr[i][j]);
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
        printf("Enter row and column value equal");
    }
    return 0;
}