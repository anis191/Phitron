#include<stdio.h>
void array_reference_pass_test(int ar[], int n){
    printf("ar address:%p\n",ar);
    printf("ar value:%d\n",ar[0]);
    ar[1] = 89;
}
int main(){
    int ar[5]={10,20,30,40,50};
    array_reference_pass_test(ar,5);
    for(int i=0; i<5; i++){
        printf("%d ",ar[i]);
    }
}