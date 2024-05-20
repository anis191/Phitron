#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    printf("address of 0th indesx: %p\n",&arr[0]);
    printf("Just address of hole array: %p\n",arr);
    printf("address of 1no index: %p\n",&arr[1]);

    printf("value of arr[0]: %d\n",arr[0]);
    printf("value of arr: %d\n",*arr);

    printf("value of arr[1]:%d\n",*(arr+1));
    printf("value of arr[2]:%d\n",*(arr+2));
    printf("value of arr[3]:%d\n",*(arr+3));
}