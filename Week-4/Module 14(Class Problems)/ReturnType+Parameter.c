// Here have returnType(float)
float sum(int x,float y){
// Here have Parameter(int x and float y)
    float s = x + y;
    return s;
}

#include<stdio.h>
int main(){
    int x;
    float y;
    scanf("%d %f",&x,&y);
    float s = sum(x,y);
    printf("%.3f",s);
}