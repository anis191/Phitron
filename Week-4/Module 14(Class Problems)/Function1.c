/* 
Syntax of Function:
returnType functionName (Parameter){
    // code;
    return ___;
}
*/

int sum(int x,int y){
    int s = x + y;
    return s;
}

#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int s = sum(x,y);
    printf("%d",s);
}