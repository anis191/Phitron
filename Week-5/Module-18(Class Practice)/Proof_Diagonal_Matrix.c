#include<stdio.h>
int main(){
    int r,c,checker = 0;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0; i<r;i++){
        for(int j=0; j<c; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    if(r == c){
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(i==j || i+j==r-1){
                    continue;
                }else{
                    if(arr[i][j] != 0){
                        checker = 1;
                        break;
                    }
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
        printf("It's not a diagonal matrix");
    }else{
        printf("It's a diagonal matrix");
    }
    }else{
        printf("It's not a diagonal matrix!");
    }
}