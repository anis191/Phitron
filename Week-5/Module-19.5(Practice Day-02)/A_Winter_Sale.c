#include<stdio.h>
int main(){
    float rate,discounted_price,original_price;
    scanf("%f %f",&rate,&discounted_price);
    rate /= 100;
    rate = 1 - rate;
    original_price = discounted_price / rate;
    printf("%.2f",original_price);
    return 0;
}