#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    //if(n>=1 && n<=100000 && m>=1 && m<=100000){
        int a[n];
        for(int i=0; i<n; i++){
            scanf("%d ",&a[i]);
        }
        int c[m+1];
        for(int i=0; i<m+1; i++){
            c[i] = 0;
        }
        for(int i=0; i<n; i++){
            if(a[i] <= m){
                c[a[i]]++;
            }
        }
        for(int i=1; i<=m; i++){
            printf("%d\n",c[i]);
        }
    //}
    return 0;
}