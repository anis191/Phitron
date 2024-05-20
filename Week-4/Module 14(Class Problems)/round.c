#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    int x = round(a);
    int y = round(b);
    int z = round(c);
    int i = round(d);
    printf("%d\n%d\n%d\n%d",x,y,z,i);
}