#include<stdio.h>
int main(){
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int a1[n1];
    int a2[n2];
    for(int i=0; i<n1; i++){
        scanf("%d",&a1[i]);
    }
    for(int i=0; i<n2; i++){
        scanf("%d",&a2[i]);
    }
    int a3[n1+n2];
    for(int i=0; i<n1; i++){
        a3[i] = a1[i];
    }
    int j=0;
    for(int i=n1; i<n1+n2; i++){
        a3[i] = a2[j];
        j++;
    }
    for(int i=0; i<n1+n2; i++){
        printf("%d ",a3[i]);
    }
    return 0;
}