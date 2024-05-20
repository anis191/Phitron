#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    if(t >= 1 && t <= 1000){
        for(int j=1; j<=t; j++){
        int d=0,c=0,k=0;
        char s[10001];
        scanf("%s",s);
        for(int i=0; i<strlen(s); i++){
            if(s[i] >= 48 && s[i] <= 57){
                d++;
            }
            else if(s[i] >= 65 && s[i] <= 90){
                c++;
            }else{
                k++;
            }
        }
        printf("%d %d %d\n",c,k,d);
    }
    }
    return 0;
}