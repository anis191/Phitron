#include<stdio.h>
void ascending(int c[], int x){
    int temp = 0;
    for(int i=0; i<3; i++){
        for(int j=i+1; j<3; j++){
            if(c[i] > c[j]){
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    for(int i=0; i<3; i++){
        printf("%d\n",c[i]);
    }
    return;
}
int main(){
    int n[3];
    for(int i=0; i<3; i++){
        scanf("%d",&n[i]);
    }
    int c[3];
    for(int i=0; i<3; i++){
        c[i] = n[i];
    }
    ascending(c,3);
    printf("\n");
    for(int i=0; i<3; i++){
        printf("%d\n",n[i]);
    }
}