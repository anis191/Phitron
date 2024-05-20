#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&a[i][j]);
        }
    }
    if(n == m){
        int count=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(i == j || i+j == n-1){
                    if(a[i][j] != 1){
                        count=1;
                        break;
                    }
                }else{
                    if(a[i][j] != 0){
                        count = 1;
                        break;
                    }
                }
            }
        }
        if(count != 0){
            printf("NO");
        }else{
            printf("YES");
        }
    }else{
        printf("NO");
    }
    return 0;
}