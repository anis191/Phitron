#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++){
    int m1,m2,d;
    scanf("%d %d %d",&m1,&m2,&d);
    if(m1>=1 && m1<=1000 && m2>=0 && m2<=1000 && d>=1 && d<=100){
        int m = m1 + m2;
        int d2 = (m1*d)/m;
        int a = d - d2;
        printf("%d\n",a);
    }
    }
    return 0;
}