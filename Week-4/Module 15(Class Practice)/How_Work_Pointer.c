#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int * p = &x;
    printf("value of x: %d\n",x);
    printf("address of x: %p\n",p);
    printf("value of x with deref.: %d\n",*p);
    // Now direct update "x" value
    x = 7;
    printf("value of x: %d\n",x);
    printf("address of x: %p\n",p);
    printf("value of x with deref.: %d\n",*p);
    // Now update "x" with pointer "p"
    *p = 9;
    printf("value of x: %d\n",x);
    printf("address of x: %p\n",p);
    printf("value of x with deref.: %d\n",*p);
}