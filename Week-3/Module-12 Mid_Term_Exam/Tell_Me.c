#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    if(t>=1 && t<=1000){
    for(int i=0; i<t; i++){
        int n,b=0;
        scanf("%d",&n);
        if(n>=1 && n<=10000){
            int a[n];
            for(int i=0; i<n; i++){
                scanf("%d",&a[i]);
            }
            int x;
            scanf("%d",&x);
            if(x>=0 && x<=1000000000){
                for(int i=0; i<n; i++){
                    if(a[i] != x){
                        continue;
                    }else{
                        b++;
                        break;
                    }
                }
                if(b != 0){
                    printf("YES\n");
                }else{
                    printf("NO\n");
                }
            }
        }
    }
    }
    return 0;
}