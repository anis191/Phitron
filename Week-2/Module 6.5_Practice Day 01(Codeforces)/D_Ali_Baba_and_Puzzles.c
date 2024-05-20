#include<stdio.h>

int main() {
  //long int a, b, c;
  long long int a,b,c,d;
  scanf("%lld %lld %lld %lld", & a, & b, & c, & d);
  if (a + b - c == d || a + b * c == d || a - b + c == d || a - b * c == d || b + c - a == d || b + c * a == d || b - c + a == d || b - c * a == d || a + c - b == d || a + c * b == d || a - c + b == d || a - c * b == d) {
    printf("YES");
  } else {
    printf("NO");
  }
}