#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N;
    scanf("%d",&N);
    if(N >= 1){
        if(N > 1000){
            printf("I will buy Punjabi\n");
            if(N-1000 >= 500){
                printf("I will buy new shoes\n");
                printf("Alisa will buy new shoes");
            }
        }else{
          printf("Bad luck!");  
        }
    }else{
        printf("Wrong");
    }
    return 0;
}
