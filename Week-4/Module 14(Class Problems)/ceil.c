#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    int x = ceil(a);
    int y = ceil(b);
    int z = ceil(c);
    int i = ceil(d);
    printf("%d\n%d\n%d\n%d",x,y,z,i);
}