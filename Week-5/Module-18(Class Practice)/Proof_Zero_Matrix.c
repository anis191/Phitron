#include<stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0; i<r;i++){
        for(int j=0; j<c; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int checker = 0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(arr[i][j] != 0){
                checker = 1;
                break;
            }else{
                continue;
            }
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    if(checker != 0){
        printf("It's Not a Zero Matrix!");
    }else{
        printf("It's a Zero Matrix!");
    }
}