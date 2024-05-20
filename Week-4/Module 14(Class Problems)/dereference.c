#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int *anis = &a;
    printf("1.Value of a: %d\n",a);
    printf("2.Address of a: %p\n",anis);
    printf("3.Address of a: %p\n",&a);
    // Update the value of "a" using pointer:
    *anis = a * 2;
    printf("3.Value of a: %d\n",a);
    printf("4.Value of a: %d\n",*anis);
}