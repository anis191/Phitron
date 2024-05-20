#include<stdio.h>
#include<math.h>
int main(){
    float a,b;
    scanf("%f %f",&a,&b);
    // pow(); a^b er value output de
    double x = pow(a,b);
    printf("%.2lf",x);
}