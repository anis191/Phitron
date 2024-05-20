#include<stdio.h>
int main(){
    int a;
    while(1){
        scanf("%d",&a);
        if(a >= 1000 && a <= 9999){
            if(a == 1999){
                printf("Correct");
                break;
            }else{
                printf("Wrong\n");
                continue;
            }
        }else{
            printf("Wrong!\n");
            continue;
        }
    }
    return 0;
}