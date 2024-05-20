#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    // 1-10 number gula konta koiber ace count korboo:
    int count[11]={0};
    for(int i=0; i<n; i++){
        count[a[i]]++;
    }
    for(int i=0; i<11; i++){
        printf("%d - %d\n",i,count[i]);
    }
    return 0;
}