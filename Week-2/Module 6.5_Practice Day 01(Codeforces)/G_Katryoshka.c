#include<stdio.h>
int main(){
    long long int n,m,k,min,doll,doll1=0,doll2=0,doll3=0,doll4=0; //n=eyes, m=mouth,k=bodies
    scanf("%lld %lld %lld",&n,&m,&k);
    if(n >= 0 && m >= 0 && k >= 0){
        while(k != 0){
        if(n == 0 || k == 0){
            //printf("0");
            break;
        }
        else if(m > 0){
            // check 3rd condition:
            if(n < m && n < k){
                min = n;
            }else if(m < n && m < k){
                min = m;
            }else{
                min = k;
            }
            doll1 += min;
            n = n - min;
            m = m - min;
            k = k - min;
        }
        else{
            if(n % 2 == k){
                doll2 += k;
            }else if(n / 2 > k){
                doll3 += k;
            }else{
                doll4 += n / 2;
            }
        }
        }
        doll = doll1+doll2+doll3+doll4;
        printf("%d",doll);
    }else{
        printf("Wrong");
    }
}