#include<stdio.h>
void max_min(int n){
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    // Max:-
    int max = a[0];
    for(int i=1; i<n; i++){
        if(max < a[i]){
            max = a[i];
        }
    }
    // Min:-
    int min = a[0];
    for(int i=1; i<n; i++){
        if(min > a[i]){
            min = a[i];
        }
    }
    printf("%d %d",min,max);
    return;
}
int main(){
    int n;
    scanf("%d",&n);
    max_min(n);
    return 0;
}