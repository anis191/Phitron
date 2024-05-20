#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N;
    scanf("%d",&N);
    if(N >= 0){
        if(N % 3 == 0){
            printf("YES");
        }else{
            printf("NO");
        }
    }else{
        printf("Wrong");
    }
    return 0;
}
