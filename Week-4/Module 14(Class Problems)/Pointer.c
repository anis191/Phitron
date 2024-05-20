/*
Pointer: Pointer is a variable which is store another variables memory addsress!
Pointer Syntax:
    dataType * pointerName;
*/
#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int *p = &x;
    printf("Value of x: %d\n",x);
    printf("Memory address of x: %p\n",p);
    // without using pointer we can print the memory address of any variables:
    printf("Memory address of x: %p\n",&x);
}