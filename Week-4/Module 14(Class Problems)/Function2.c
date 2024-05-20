// Position of a Function in the code:
/*
User define function ke main function er nise liqle, obossoi function er 1st line main function er age li1the hobe!
*/
#include<stdio.h>
int sum(int x,int y);
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int s = sum(x,y);
    printf("%d",s);
}
int sum(int x,int y){
    int s = x + y;
    return s;
}