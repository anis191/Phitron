#include<stdio.h>
int vowels(char *s, int i, int count){
    if(s[i] == '\0') return count;
    if(s[i] >= 65 && s[i] <= 90){
        s[i] = s[i] + 32;
    }
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
        count++;
    }
    vowels(s,i+1,count);
}
int main(){
    char s[201];
    fgets(s,201,stdin);
    int v = vowels(s,0,0);
    printf("%d",v);
}