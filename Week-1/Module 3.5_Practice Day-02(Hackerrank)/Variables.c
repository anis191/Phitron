#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int A;
    long long int B;
    float C;
    char D;
    scanf("%d",&A);
    scanf("%lld",&B);
    scanf("%f",&C);
    scanf(" %c",&D);
    printf("%d\n%lld\n%.2f\n%c",A,B,C,D);
    return 0;
}
