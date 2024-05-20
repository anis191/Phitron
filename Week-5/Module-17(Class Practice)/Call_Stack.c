#include<stdio.h>
void world(void){
    printf("World Start\n");
    printf("World End\n");
}
void hello(void){
    printf("Hello Start\n");
    world();
    printf("Hello End\n");
}
int main(){
    printf("Main Start\n");
    hello();
    printf("Main End\n");
    return 0;
}