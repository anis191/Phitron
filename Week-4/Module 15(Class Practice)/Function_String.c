#include<stdio.h>
#include<string.h>
void pass_string_refer(char str[]){
    printf("length of str:%d\n",strlen(str));
    str[4] = 'Z';
}
int main(){
    char str[]="Anisul";
    printf("length of str:%d\n",strlen(str));
    pass_string_refer(str);
    printf("%s",str);
}