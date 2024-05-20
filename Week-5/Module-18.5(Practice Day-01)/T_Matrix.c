#include<stdio.h>
#include<math.h>
int main(){
    int n,Psum=0,Ssum=0;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    // Primary:-
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                Psum += a[i][j];
            }
            if(i+j == n-1){
                Ssum += a[i][j];
            }
        }
    }
    printf("%d",abs(Psum-Ssum));
    return 0;
}