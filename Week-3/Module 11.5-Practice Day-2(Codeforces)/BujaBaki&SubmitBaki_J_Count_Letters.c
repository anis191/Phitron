// #include<stdio.h>
// #include<string.h>
// int main(){
//     char a[1000000];
//     scanf("%s",a);
//     int c[26]={0};
//     for(int i=0; i<strlen(a); i++){
//         c[a[i] - 97]++;
//     }
//     for(int i=0; i<26; i++){
//         if(c[i] != 0){
//             printf("%c : %d\n",i+97,c[i]);
//         }
//     }
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str = malloc(10000001);  

    
    if (scanf("%10000000s", str) != 1) {
        
    }

    
    int frequency[26] = {0};

    
    int len = 0;
    while (str[len] != '\0') {
        char ch = str[len];
        if (ch >= 'a' && ch <= 'z') {
            frequency[ch - 'a']++;
        }
        len++;
    }

    
    for (int i = 0; i < 26; i++) {
        if (frequency[i] > 0) {
            printf("%c : %d\n", 'a' + i, frequency[i]);
        }
    }

    
    return 0;
}

