#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n+1];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int position,insert_value;
    scanf("%d %d",&position,&insert_value);
    for(int i=n; i>=position+1; i--){
        a[i] = a[i-1];
    }
    a[position] = insert_value;
    for(int i=0; i<=n; i++){
        printf("%d ",a[i]);
    }
    return 0;
}