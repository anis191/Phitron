#include<stdio.h>
void pass_reference(int * p){
    printf("address of a: %p\n",p);
    printf("value of a(deref.):%d\n",*p);
    *p = 50;
}
int main(){
    int a;
    scanf("%d",&a);
    printf("without any change: %d\n",a);
    pass_reference(&a);
    printf("a value change on user function:%d\n",a);
}