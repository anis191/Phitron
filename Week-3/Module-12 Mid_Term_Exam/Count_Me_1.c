#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n >= 1 && n <= 100000){
        int x=0,y=0;
        int a[n];
        for(int i=0; i<n; i++){
            scanf("%d",&a[i]);
        }
        for(int i=0; i<n; i++){
            if(a[i] % 2 == 0){
                x++;
            }
            else if(a[i] % 3 == 0){
                y++;
            }
            else{
                continue;
            }
        }
        printf("%d %d",x,y);
    }
    return 0;
}