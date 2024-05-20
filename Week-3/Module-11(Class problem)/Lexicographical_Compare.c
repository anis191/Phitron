#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100];
    scanf("%s %s",a,b);
    int i=0;
    while(1){
        if(a[i] == '\0' && b[i] == '\0'){
            printf("%s and %s: Are same",a,b);
            break;
        }
        else if(a[i] == '\0'){
            printf("%s: a is small",a);
            break;
        }else if(b[i] == '\0'){
            printf("%s:b is small",b);
            break;
        }
        //if(a[i] != b[i]){
            if(a[i] == b[i]){
                i++;
            }
            else if(a[i] > b[i]){
                printf("%s:b small",b);
                break;
            }else{
                printf("%s- a small",a);
                break;
            }
//}
        //i++;
    }
}
// laxicographical compare korar build in function: "strcmp();"