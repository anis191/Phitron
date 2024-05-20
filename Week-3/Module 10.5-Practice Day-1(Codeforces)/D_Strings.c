#include<stdio.h>
#include<string.h>
int main(){
    char a[11];
    char b[11];
    scanf("%s %s",a,b);
    int al = strlen(a);
    int bl = strlen(b);
    char c[al+bl+1];
    //printf("%d",sizeof(c));
    for(int i=0; i<al; i++){
        c[i] = a[i];
    }
    int j=0;
    for(int i=al; i<al+bl; i++){
        c[i] = b[j];
        j++;
    }
    c[al+bl] = '\0';
    char temp;
    temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    printf("%d %d\n",al,bl);
    printf("%s\n",c);
    printf("%s %s",a,b);
    return 0;
}