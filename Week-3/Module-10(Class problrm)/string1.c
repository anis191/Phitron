#include<stdio.h>
int main(){
    //A integer array:
    int int_Array[5]={1,2,3,4,5};
    //A float array:
    float float_array[5]={1.0,2.0,3.0,4.0,5.0};
    //A character array:
    char char_array[5]={'a','b','c','d','e'};
    for(int i=0; i<5; i++){
        printf("%c ",char_array[i]);
    }
    return 0;
}