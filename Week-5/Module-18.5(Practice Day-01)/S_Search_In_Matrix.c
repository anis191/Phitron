#include<stdio.h>
int main(){
    int n,m,x,no=0;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d",&x);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j] == x){
                no = 1;
            }
        }
    }
    if(no == 1){
        printf("will not take number");
    }else{
        printf("will take number");
    }
    return 0;
}