#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int j=1; j<=t; j++){
    int n,tiger=0,pathaan=0;
    scanf("%d",&n);
    char a[n];
    scanf("%s",a);
    int i=0;
    while(a[i] != '\0'){
        if(a[i] == 'T'){
            tiger++;
        }else{
            pathaan++;
        }
        i++;
    }
    if(tiger > pathaan){
        printf("Tiger");
    }else if(pathaan > tiger){
        printf("Pathaan");
    }else{
        printf("Draw");
    }
    printf("\n");
    }
    return 0;
}