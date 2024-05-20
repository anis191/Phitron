#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int x,No_identifire=0;
    scanf("%d",&x);
    for(int i=0; i<n-1;i++){
        for(int j=i+1; j<n; j++){
            if(a[i] + a[j] == x){
                printf("Yes");
                No_identifire++;
                break;
            }else{
                continue;
            }
        }
    }
    if(No_identifire == 0){
        printf("No");
    }
    return 0;
}