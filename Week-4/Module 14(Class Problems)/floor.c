#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    float x = floor(a);
    int y = floor(b);
    int z = floor(c);
    float i = floor(d);
    printf("%f\n%d\n%d\n%f",x,y,z,i);
}
// floor(); just integer part ni nibe!